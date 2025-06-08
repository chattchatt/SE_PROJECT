#include "RegisterBicycleUI.h"

/*
	함수 이름 : RegisterBicycleUI::RegisterBicycleUI()
	기능	  : 입력 및 출력 스트림 참조를 멤버 변수로 초기화함
    전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림
    반환값    : 없음
*/
RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp)
    : in(in_fp), out(out_fp) {
}

/*
	함수 이름 : RegisterBicycleUI::start()
	기능	  : RegisterBicycleControl 객체를 통해 자전거 등록 메시지를 받아 bikeId와 model을 출력 스트림에 기록함
    전달 인자 : 없음
    반환값    : 없음
*/
void RegisterBicycleUI::start() {
    std::string bikeId, model;
    in >> bikeId >> model;

    std::string result = control.registerBike(bikeId, model);
    out << result;
}

#include "RentBicycleUI.h"

/*
	함수 이름 : RentBicycleUI::RentBicycleUI()
    기능	  : 입력 및 출력 스트림 참조를 멤버 변수로 초기화함
	전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림, userId : 현재 사용자 ID
    반환값    : 없음
*/
RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp, const std::string& userId)
    : in(in_fp), out(out_fp), control(userId) {
}

/*
	함수 이름 : RentBicycleUI::start()
	기능	  : RentBicycleControl 객체를 통해 자전거 대여 메시지를 받아 bikeId를 출력 스트림에 기록함
    전달 인자 : 없음
    반환값    : 없음
*/
void RentBicycleUI::start() {
    std::string bikeId;
	std::string model;
    in >> bikeId;

    std::string result = control.rentBicycle(bikeId, model);
    out << result;
}

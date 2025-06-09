#include "MyRentalUI.h"

/*
	함수 이름 : MyRentalUI
	기능	  : 입력 및 출력 스트림 참조를 멤버 변수로 초기화함
	전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림, vector<Bicycle>* bicycleList : Bicycle 객체를 저장하는 벡터의 포인터
    반환값    : 없음
*/
MyRentalUI::MyRentalUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Bicycle>* bicycleList)
    : in(in_fp), out(out_fp), control(bicycleList) {
}

/*
    함수 이름 : start
	기능	  : MyRentalControl 객체를 통해 대여 정보 조회 메시지를 받아 출력 스트림에 기록함
    전달 인자 : 없음
    반환값    : 없음
*/
void MyRentalUI::start() {
    std::string clientId;
    in >> clientId;

    std::vector<Bicycle> list = control.getRentalList(clientId);

    out << "5.1. 대여 정보 조회\n";
    for (const Bicycle& bike : list) {
        out << "> " << bike.getBikeId() << " " << bike.getModel() << "\n";
    }
}

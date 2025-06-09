#include "SignUpUI.h"
#include <iostream>

/*
	함수 이름 : SignUpUI::SignUpUI()
	기능	  : 입력  및 출력 스트림 참조를 멤버 변수로 초기화함
	전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림
    반환값    : 없음
*/
SignUpUI::SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp) 
    : in(in_fp), out(out_fp) {
}

/*
    함수 이름 : SignUpUI::start()
	기능	  : SignUpControl 객체를 통해 회원 가입 메시지를 받아 id, pw, phone을 출력 스트림에 기록함
    전달 인자 : 없음
    반환값    : 없음
*/
void SignUpUI::start() {
    std::string id, pw, phone;
    in >> id >> pw >> phone;

    std::string result = control.CreateMember(id, pw, phone);
    out << result;
}
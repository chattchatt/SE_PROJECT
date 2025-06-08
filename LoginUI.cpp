#include "LoginUI.h"	

/*
	함수 이름 : LoginUI
	기능	  : 입력 및 출력 스트림 참조를 멤버 변수로 초기화함
	전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림, members : Member 객체를 저장하는 벡터의 포인터
	반환값    : 없음
*/
// TODO: LoinUI 생성자에서 members 벡터를 받는 것이 맞는지? (LoginControl 객체가 Member 객체를 직접 관리하는 것이 맞는지?)
LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Member*>* members)
	: in(in_fp), out(out_fp), control(members) {
}

/*
	함수 이름 : start
	기능	  : LoginControl 객체를 통해 로그인 메시지를 받아 id와 pw를 출력 스트림에 기록함
	전달 인자 : 없음
	반환값    : 없음
*/
void LoginUI::start() {
    std::string id, pw;
    in >> id >> pw;

    std::string result = control.checkMember(id, pw);
    out << result;
}
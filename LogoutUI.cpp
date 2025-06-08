#include "LogoutUI.h"

/*
	함수 이름 : LogoutUI
	기능	  : 입력 및 출력 스트림 참조를 멤버 변수로 초기화함
	전달 인자 : in_fp : 입력 스트림, out_fp : 출력 스트림
	반환값    : 없음
*/
LogoutUI::LogoutUI(std::ifstream& in_fp, std::ofstream& out_fp)
    : in(in_fp), out(out_fp) {
}

/*
	함수 이름 : start
	기능	  : LogoutControl 객체를 통해 로그아웃 메시지를 받아 출력 스트림에 기록함
	전달 인자 : 없음
	반환값    : 없음
*/
void LogoutUI::start() {
    std::string result = control.systemout();
    out << result;
}

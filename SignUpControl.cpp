#include "SignUpControl.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string SignUpControl::CreateMember(const std::string& id, const std::string& pw, const std::string& phone) {
    return "1.1. 회원가입\n> " + id + " " + pw + " " + phone + "\n";
}
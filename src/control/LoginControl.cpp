#include "LoginControl.h"

/*
    함수 이름 : 
    기능	  : 
    전달 인자 : 
    반환값    : 
*/
LoginControl::LoginControl(std::vector<Member*>* members)
    : memberList(members) {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string LoginControl::checkMember(const std::string& id, const std::string& pw) {
    for (Member* member : *memberList) {
        if (member->getId() == id) {
            if (member->checkPassword(pw)) {
                return "2.1. 로그인\n> " + id + "\n";
            }
            else {
                return "2.1. 로그인 실패: 비밀번호 오류\n";
            }
        }
    }
    return "2.1. 로그인 실패: 아이디 없음\n";
}

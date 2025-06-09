#include "Member.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
Member::Member(const std::string& id, const std::string& pw)
    : id(id), pw(pw) {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string Member::getId() const {
    return id;
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
bool Member::checkPassword(const std::string& inputPw) const {
    return pw == inputPw;
}
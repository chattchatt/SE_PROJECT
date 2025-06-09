#include "Client.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
Client::Client(const std::string& id, const std::string& pw, const std::string& phoneNum)
    : Member(id,pw), phoneNum(phoneNum) {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string Client::getPhoneNum() const {
	return phoneNum;
}
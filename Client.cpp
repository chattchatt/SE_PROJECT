#include "Client.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
Client::Client(const std::string& id, const std::string& pw, const std::string& phoneNum)
    : Member(id,pw), phoneNum(phoneNum) {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string Client::getPhoneNum() const {
	return phoneNum;
}
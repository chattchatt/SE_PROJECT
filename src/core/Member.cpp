#include "Member.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
Member::Member(const std::string& id, const std::string& pw)
    : id(id), pw(pw) {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string Member::getId() const {
    return id;
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
bool Member::checkPassword(const std::string& inputPw) const {
    return pw == inputPw;
}
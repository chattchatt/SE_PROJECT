#include "LoginControl.h"

/*
    �Լ� �̸� : 
    ���	  : 
    ���� ���� : 
    ��ȯ��    : 
*/
LoginControl::LoginControl(std::vector<Member*>* members)
    : memberList(members) {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string LoginControl::checkMember(const std::string& id, const std::string& pw) {
    for (Member* member : *memberList) {
        if (member->getId() == id) {
            if (member->checkPassword(pw)) {
                return "2.1. �α���\n> " + id + "\n";
            }
            else {
                return "2.1. �α��� ����: ��й�ȣ ����\n";
            }
        }
    }
    return "2.1. �α��� ����: ���̵� ����\n";
}

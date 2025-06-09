#ifndef LOGIN_CONTROL_H
#define LOGIN_CONTROL_H

#include <string>
#include <vector>
#include "Member.h"

class LoginControl {
private:
    std::vector<Member*>* memberList;  // 멤버 포인터 벡터

public:
    LoginControl() : memberList(nullptr) {}
    LoginControl(std::vector<Member*>* members) : memberList(members) {}
    std::string checkMember(const std::string& id, const std::string& pw);
};

#endif // LOGIN_CONTROL_H
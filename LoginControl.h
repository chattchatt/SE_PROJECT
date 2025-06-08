#include <string>
#include <vector>
#include "Member.h"

class LoginControl {
private:
    std::vector<Member*>* memberList;  // 외부에서 주입받은 포인터

public:
    LoginControl(std::vector<Member*>* members);  // 생성자
    std::string checkMember(const std::string& id, const std::string& pw);
};
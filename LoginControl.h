#include <string>
#include <vector>
#include "Member.h"

class LoginControl {
private:
    std::vector<Member*>* memberList;  // �ܺο��� ���Թ��� ������

public:
    LoginControl(std::vector<Member*>* members);  // ������
    std::string checkMember(const std::string& id, const std::string& pw);
};
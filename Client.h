#include "Member.h"
#include <string>

class Client : public Member {
private:
    std::string phoneNum;
public:
    Client(const std::string& id, const std::string& pw, const std::string& phoneNum);
    std::string getPhoneNum() const;
};
#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
protected:
	std::string id;
	std::string pw;

public:
	Member(const std::string& id, const std::string& pw) : id(id), pw(pw) {}
	virtual ~Member() = default;
	
	std::string getId() const { return id; }
	bool checkPassword(const std::string& inputPw) const { return pw == inputPw; }
};

#endif // MEMBER_H
#include <string>

class Member {
protected:
	std::string id;
	std::string pw;

public:
	Member(const std::string& id, const std::string& pw) : id(id), pw(pw) {}
	std::string getId() const;
	bool checkPassword(const std::string& pw) const;
	virtual ~Member() {}
};
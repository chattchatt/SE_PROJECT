#include "Member.h"

class Admin : public Member {
	Admin(const std::string& id, const std::string& pw)
		: Member(id, pw) {
	}
};
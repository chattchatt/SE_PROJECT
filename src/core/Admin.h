#ifndef ADMIN_H
#define ADMIN_H

#include "Member.h"

class Admin : public Member {
public:
	Admin(const std::string& id, const std::string& pw)
		: Member(id, pw) {
	}
};

#endif // ADMIN_H
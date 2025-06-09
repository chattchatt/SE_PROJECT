#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <fstream>
#include <string>
#include <vector>
#include "LoginControl.h"
#include "Member.h"

class LoginUI {
private:
	std::ifstream& in;    //  Ÿ
	std::ofstream& out;
	LoginControl control;

public:
	LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Member*>* members)
		: in(in_fp), out(out_fp), control(members) {}
	void start();
};

#endif // LOGIN_UI_H
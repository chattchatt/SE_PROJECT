#include <fstream>
#include <string>
#include "LoginControl.h"

class LoginUI {
private:
	std::ifstream& in;    // 참조 타입
	std::ofstream& out;
	LoginControl control;

public:
	LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Member*>* members);
	void start();
};
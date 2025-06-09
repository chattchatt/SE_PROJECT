#include <fstream>
#include <string>
#include "SignUpControl.h"

class SignUpUI {
private:
	std::ifstream& in;    // 참조 타입
	std::ofstream& out;
	SignUpControl control;

public :
	SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp);
	void start();
};
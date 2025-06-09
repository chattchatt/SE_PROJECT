#include <fstream>
#include <string>
#include "SignUpControl.h"

class SignUpUI {
private:
	std::ifstream& in;    // ���� Ÿ��
	std::ofstream& out;
	SignUpControl control;

public :
	SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp);
	void start();
};
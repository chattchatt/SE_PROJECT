#include "LogoutUI.h"

/*
	�Լ� �̸� : LogoutUI
	���	  : �Է� �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
	���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��
	��ȯ��    : ����
*/
LogoutUI::LogoutUI(std::ifstream& in_fp, std::ofstream& out_fp)
    : in(in_fp), out(out_fp) {
}

/*
	�Լ� �̸� : start
	���	  : LogoutControl ��ü�� ���� �α׾ƿ� �޽����� �޾� ��� ��Ʈ���� �����
	���� ���� : ����
	��ȯ��    : ����
*/
void LogoutUI::start() {
    std::string result = control.systemout();
    out << result;
}

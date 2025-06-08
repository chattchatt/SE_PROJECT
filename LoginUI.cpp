#include "LoginUI.h"	

/*
	�Լ� �̸� : LoginUI
	���	  : �Է� �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
	���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��, members : Member ��ü�� �����ϴ� ������ ������
	��ȯ��    : ����
*/
// TODO: LoinUI �����ڿ��� members ���͸� �޴� ���� �´���? (LoginControl ��ü�� Member ��ü�� ���� �����ϴ� ���� �´���?)
LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Member*>* members)
	: in(in_fp), out(out_fp), control(members) {
}

/*
	�Լ� �̸� : start
	���	  : LoginControl ��ü�� ���� �α��� �޽����� �޾� id�� pw�� ��� ��Ʈ���� �����
	���� ���� : ����
	��ȯ��    : ����
*/
void LoginUI::start() {
    std::string id, pw;
    in >> id >> pw;

    std::string result = control.checkMember(id, pw);
    out << result;
}
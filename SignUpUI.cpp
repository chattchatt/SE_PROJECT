#include "SignUpUI.h"
#include <iostream>

/*
	�Լ� �̸� : SignUpUI::SignUpUI()
	���	  : �Է�  �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
	���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��
    ��ȯ��    : ����
*/
SignUpUI::SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp) 
    : in(in_fp), out(out_fp) {
}

/*
    �Լ� �̸� : SignUpUI::start()
	���	  : SignUpControl ��ü�� ���� ȸ�� ���� �޽����� �޾� id, pw, phone�� ��� ��Ʈ���� �����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void SignUpUI::start() {
    std::string id, pw, phone;
    in >> id >> pw >> phone;

    std::string result = control.CreateMember(id, pw, phone);
    out << result;
}
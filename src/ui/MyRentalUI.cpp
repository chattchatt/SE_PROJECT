#include "MyRentalUI.h"

/*
	�Լ� �̸� : MyRentalUI
	���	  : �Է� �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
	���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��, vector<Bicycle>* bicycleList : Bicycle ��ü�� �����ϴ� ������ ������
    ��ȯ��    : ����
*/
MyRentalUI::MyRentalUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Bicycle>* bicycleList)
    : in(in_fp), out(out_fp), control(bicycleList) {
}

/*
    �Լ� �̸� : start
	���	  : MyRentalControl ��ü�� ���� �뿩 ���� ��ȸ �޽����� �޾� ��� ��Ʈ���� �����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void MyRentalUI::start() {
    std::string clientId;
    in >> clientId;

    std::vector<Bicycle> list = control.getRentalList(clientId);

    out << "5.1. �뿩 ���� ��ȸ\n";
    for (const Bicycle& bike : list) {
        out << "> " << bike.getBikeId() << " " << bike.getModel() << "\n";
    }
}

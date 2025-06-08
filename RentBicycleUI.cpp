#include "RentBicycleUI.h"

/*
	�Լ� �̸� : RentBicycleUI::RentBicycleUI()
    ���	  : �Է� �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
	���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��, userId : ���� ����� ID
    ��ȯ��    : ����
*/
RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp, const std::string& userId)
    : in(in_fp), out(out_fp), control(userId) {
}

/*
	�Լ� �̸� : RentBicycleUI::start()
	���	  : RentBicycleControl ��ü�� ���� ������ �뿩 �޽����� �޾� bikeId�� ��� ��Ʈ���� �����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void RentBicycleUI::start() {
    std::string bikeId;
	std::string model;
    in >> bikeId;

    std::string result = control.rentBicycle(bikeId, model);
    out << result;
}

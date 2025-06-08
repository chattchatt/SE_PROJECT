#include "RegisterBicycleUI.h"

/*
	�Լ� �̸� : RegisterBicycleUI::RegisterBicycleUI()
	���	  : �Է� �� ��� ��Ʈ�� ������ ��� ������ �ʱ�ȭ��
    ���� ���� : in_fp : �Է� ��Ʈ��, out_fp : ��� ��Ʈ��
    ��ȯ��    : ����
*/
RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp)
    : in(in_fp), out(out_fp) {
}

/*
	�Լ� �̸� : RegisterBicycleUI::start()
	���	  : RegisterBicycleControl ��ü�� ���� ������ ��� �޽����� �޾� bikeId�� model�� ��� ��Ʈ���� �����
    ���� ���� : ����
    ��ȯ��    : ����
*/
void RegisterBicycleUI::start() {
    std::string bikeId, model;
    in >> bikeId >> model;

    std::string result = control.registerBike(bikeId, model);
    out << result;
}

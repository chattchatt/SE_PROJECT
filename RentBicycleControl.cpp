#include "RentBicycleControl.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
RentBicycleControl::RentBicycleControl(const std::string& userId)
    : currentUserId(userId) {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/

// TODO : currentUserId�� �ƴ϶� bikeId�� Model���� ����ؾ���
std::string RentBicycleControl::rentBicycle(const std::string& bikeId, const std::string& model) {
    return "4.1. ������ �뿩\n> " + model + " " + bikeId + "\n";
}

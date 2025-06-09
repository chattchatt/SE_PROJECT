#include "MyRentalControl.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
MyRentalControl::MyRentalControl(std::vector<Bicycle>* bikes)
    : bicycleList(bikes) {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::vector<Bicycle> MyRentalControl::getRentalList(const std::string& clientId) {
    std::vector<Bicycle> rented;
    for (const Bicycle& bike : *bicycleList) {
        if (bike.getIsRented() && bike.getRentedBy() == clientId) {
            rented.push_back(bike);
        }
    }
    return rented;
}

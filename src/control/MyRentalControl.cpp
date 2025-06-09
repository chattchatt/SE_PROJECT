#include "MyRentalControl.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
MyRentalControl::MyRentalControl(std::vector<Bicycle>* bikes)
    : bicycleList(bikes) {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
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

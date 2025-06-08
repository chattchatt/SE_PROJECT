#include "RentBicycleControl.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
RentBicycleControl::RentBicycleControl(const std::string& userId)
    : currentUserId(userId) {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/

// TODO : currentUserId가 아니라 bikeId와 Model명을 출력해야함
std::string RentBicycleControl::rentBicycle(const std::string& bikeId, const std::string& model) {
    return "4.1. 자전거 대여\n> " + model + " " + bikeId + "\n";
}

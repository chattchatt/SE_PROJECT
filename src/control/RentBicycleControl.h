#ifndef RENT_BICYCLE_CONTROL_H
#define RENT_BICYCLE_CONTROL_H

#include <string>
#include <vector>
#include "Bicycle.h"

// TODO : rentBicycle() 함수는 bikeId와 Model을 받아 대여 가능 여부를 확인해야 합니다. model을 추가로 받아야 합니다.
class RentBicycleControl {
private:
    std::vector<Bicycle>* bicycleList;

public:
    RentBicycleControl() : bicycleList(nullptr) {}
    RentBicycleControl(std::vector<Bicycle>* bicycles) : bicycleList(bicycles) {}
    bool rentBicycle(const std::string& userId, const std::string& bicycleId);
};

#endif // RENT_BICYCLE_CONTROL_H
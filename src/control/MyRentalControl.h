#ifndef MY_RENTAL_CONTROL_H
#define MY_RENTAL_CONTROL_H

#include <string>
#include <vector>
#include "Bicycle.h"

class MyRentalControl {
private:
    std::vector<Bicycle>* bicycleList;

public:
    MyRentalControl() : bicycleList(nullptr) {}
    MyRentalControl(std::vector<Bicycle>* bicycles) : bicycleList(bicycles) {}
    std::vector<Bicycle> getMyRentals(const std::string& userId);
};

#endif // MY_RENTAL_CONTROL_H
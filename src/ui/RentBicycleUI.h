#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <fstream>
#include <string>
#include "RentBicycleControl.h"

class RentBicycleUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    RentBicycleControl control;

public:
    RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp)
        : in(in_fp), out(out_fp) {}
    void start();
};

#endif // RENT_BICYCLE_UI_H
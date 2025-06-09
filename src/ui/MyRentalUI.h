#ifndef MY_RENTAL_UI_H
#define MY_RENTAL_UI_H

#include <fstream>
#include <string>
#include "MyRentalControl.h"

class MyRentalUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    MyRentalControl control;

public:
    MyRentalUI(std::ifstream& in_fp, std::ofstream& out_fp)
        : in(in_fp), out(out_fp) {}
    void start();
};

#endif // MY_RENTAL_UI_H
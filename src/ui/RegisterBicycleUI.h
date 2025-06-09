#include <fstream>
#include "RegisterBicycleControl.h"

class RegisterBicycleUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    RegisterBicycleControl control;

public:
    RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp);
    void start();
};
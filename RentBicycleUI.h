#include <fstream>
#include "RentBicycleControl.h"

class RentBicycleUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    RentBicycleControl control;

public:
    RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp, const std::string& userId);
    void start();
};
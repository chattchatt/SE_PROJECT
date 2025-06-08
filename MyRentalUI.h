#include <fstream>
#include <vector>
#include "MyRentalControl.h"

class MyRentalUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    MyRentalControl control;

public:
    MyRentalUI(std::ifstream& in_fp, std::ofstream& out_fp, std::vector<Bicycle>* bicycleList);
    void start();
};
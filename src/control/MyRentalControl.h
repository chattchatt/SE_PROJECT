#include <vector>
#include <string>
#include "Bicycle.h"

class MyRentalControl {
private:
    std::vector<Bicycle>* bicycleList;

public:
    MyRentalControl(std::vector<Bicycle>* bikes);
    std::vector<Bicycle> getRentalList(const std::string& clientId);
};
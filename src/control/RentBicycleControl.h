#include <string>

// TODO : rentBicycle() 함수에서 bikeId와 Model명을 출력해야함. model 인자 추가 필요
class RentBicycleControl {
private:
    std::string currentUserId;

public:
    RentBicycleControl(const std::string& userId);
    std::string rentBicycle(const std::string& bikeId, const std::string& model);
};
#include <string>

// TODO : rentBicycle() �Լ����� bikeId�� Model���� ����ؾ���. model ���� �߰� �ʿ�
class RentBicycleControl {
private:
    std::string currentUserId;

public:
    RentBicycleControl(const std::string& userId);
    std::string rentBicycle(const std::string& bikeId, const std::string& model);
};
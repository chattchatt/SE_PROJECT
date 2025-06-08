#include <string>

class Bicycle {
private:
    std::string bikeId;
    std::string model;
    bool isRented;
    std::string rentedBy;

public:
    Bicycle(const std::string& bikeId, const std::string& model);

    std::string getBikeId() const;
    std::string getModel() const;
    bool getIsRented() const;
    std::string getRentedBy() const;

    bool rent(const std::string& userId);
};
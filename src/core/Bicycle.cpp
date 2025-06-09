#include "Bicycle.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
Bicycle::Bicycle(const std::string& bikeId, const std::string& model)
    : bikeId(bikeId), model(model), isRented(false), rentedBy("") {
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string Bicycle::getBikeId() const {
    return bikeId;
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string Bicycle::getModel() const {
    return model;
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
bool Bicycle::getIsRented() const {
    return isRented;
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
std::string Bicycle::getRentedBy() const {
    return rentedBy;
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
bool Bicycle::rent(const std::string& userId) {
    if (isRented) return false;
    isRented = true;
    rentedBy = userId;
    return true;
}

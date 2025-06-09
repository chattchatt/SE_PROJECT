#include "Bicycle.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
Bicycle::Bicycle(const std::string& bikeId, const std::string& model)
    : bikeId(bikeId), model(model), isRented(false), rentedBy("") {
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string Bicycle::getBikeId() const {
    return bikeId;
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string Bicycle::getModel() const {
    return model;
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
bool Bicycle::getIsRented() const {
    return isRented;
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
std::string Bicycle::getRentedBy() const {
    return rentedBy;
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
bool Bicycle::rent(const std::string& userId) {
    if (isRented) return false;
    isRented = true;
    rentedBy = userId;
    return true;
}

#include <iostream>
#include <fstream>
#include <string>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentBicycleUI.h"
#include "MyRentalUI.h"

#include "LoginControl.h"
#include "LogoutControl.h"
#include "SignUpControl.h"
#include "MyRentalControl.h"
#include "RentBicycleControl.h"
#include "RegisterBicycleControl.h"

#include "Admin.h"
#include "Client.h"
#include "Member.h"
#include "Bicycle.h"

class FileManager {
private:
    std::ifstream in_fp;
    std::ofstream out_fp;
    SignUpUI signUpUI;
    LoginUI loginUI;
    LogoutUI logoutUI;
    RegisterBicycleUI registerBicycleUI;
    RentBicycleUI rentBicycleUI;
    MyRentalUI myRentalUI;

public:
    FileManager(const std::string& inputFileName, const std::string& outputFileName);
    void run();
};
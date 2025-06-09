#include <fstream>
#include "LogoutControl.h"

class LogoutUI {
private:
    std::ifstream& in;
    std::ofstream& out;
    LogoutControl control;

public:
    LogoutUI(std::ifstream& in_fp, std::ofstream& out_fp);
    void start();
};
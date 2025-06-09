#include "FileManager.h"

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/

FileManager::FileManager(const std::string& inputFileName, const std::string& outputFileName)
    // TODO: 초기화 해야하는 전달 인자 확인 (모든 .cpp 파일)
    : signUpUI(in_fp, out_fp), loginUI(in_fp, out_fp), logoutUI(in_fp, out_fp), registerBicycleUI(in_fp, out_fp), rentBicycleUI(in_fp, out_fp), myRentalUI(in_fp,out_fp) 
{
    in_fp.open(inputFileName);
    out_fp.open(outputFileName);
}

/*
    함수 이름 :
    기능	  :
    전달 인자 :
    반환값    :
*/
void FileManager::run() {
    int menu1 = 0, menu2 = 0;
    bool exitFlag = false;
    while (!exitFlag) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu1 >> menu2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu1) {
        case 1:
            if (menu2 == 1) signUpUI.start();
            break;
        case 2:
            if (menu2 == 1) loginUI.start();
            else if (menu2 == 2) logoutUI.start();
            break;
        case 3:
            if (menu2 == 1) registerBicycleUI.start();
            break;
        case 4:
            if (menu2 == 1) rentBicycleUI.start();
            break;
        case 5:
            if (menu2 == 1) myRentalUI.start();
            break;
        case 6:
            if (menu2 == 1) {
                out_fp << "6.1. 종료" << std::endl;
                exitFlag = true;
            }
            break;
        }
    }
    in_fp.close();
    out_fp.close();
}

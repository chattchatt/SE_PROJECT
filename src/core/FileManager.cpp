#include "FileManager.h"

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/

FileManager::FileManager(const std::string& inputFileName, const std::string& outputFileName)
    // TODO: �ʱ�ȭ �ؾ��ϴ� ���� ���� Ȯ�� (��� .cpp ����)
    : signUpUI(in_fp, out_fp), loginUI(in_fp, out_fp), logoutUI(in_fp, out_fp), registerBicycleUI(in_fp, out_fp), rentBicycleUI(in_fp, out_fp), myRentalUI(in_fp,out_fp) 
{
    in_fp.open(inputFileName);
    out_fp.open(outputFileName);
}

/*
    �Լ� �̸� :
    ���	  :
    ���� ���� :
    ��ȯ��    :
*/
void FileManager::run() {
    int menu1 = 0, menu2 = 0;
    bool exitFlag = false;
    while (!exitFlag) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu1 >> menu2;

        // �޴� ���� �� �ش� ���� ����
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
                out_fp << "6.1. ����" << std::endl;
                exitFlag = true;
            }
            break;
        }
    }
    in_fp.close();
    out_fp.close();
}

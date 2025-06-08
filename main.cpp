#include "FileManager.h"

int main() {
    FileManager fileManager(INPUT_FILE_NAME, OUTPUT_FILE_NAME);
    fileManager.run();
    return 0;
}
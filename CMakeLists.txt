cmake_minimum_required(VERSION 3.10)
project(BicycleRentalSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 소스 파일들을 찾아서 변수에 저장
file(GLOB_RECURSE SOURCES 
    "src/*.cpp"
    "main.cpp"
)

# 헤더 파일 경로 추가
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/core
    ${CMAKE_SOURCE_DIR}/src/ui
    ${CMAKE_SOURCE_DIR}/src/control
)

# 실행 파일 생성
add_executable(${PROJECT_NAME} ${SOURCES}) 
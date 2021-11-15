cmake_minimum_required(VERSION 3.20)
project(REST_C)

set(CMAKE_CXX_STANDARD 11)

set(OPENSSL_USE_STATIC_LIBS TRUE)
find_package(OpenSSL REQUIRED)

add_executable(REST_C main.cpp)

target_link_libraries(${PROJECT_NAME} OpenSSL::SSL)

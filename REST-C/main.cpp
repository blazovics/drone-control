#define CPPHTTPLIB_OPENSSL_SUPPORT
#include <iostream>
#include "httplib.h"
#include "json.hpp"

using namespace nlohmann;

int main() {

    httplib::Client cli("http://5glab.educationhost.cloud");

    auto res = cli.Get("/igniter/public/Drone");
    res->status;
    res->body;

    std::cout << res->body << std::endl;

    auto j3 = json::parse(res->body);

    std::cout << j3.dump(4);

    if (j3["camera"]){
        std::cout<<"on";
    }
    else{
        std::cout<<"off";
    }
    return 0;


}

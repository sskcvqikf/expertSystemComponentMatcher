#include <string>
#include <iostream>

#include "config.h"

#include "utils.h"

char get_answer(std::string to_ask){
    std::cout << to_ask << std::endl;
    std::cout << config::PS1;
    char answer;
    std::cin >> answer;
    return answer;
}
#include <string>
#include <vector>
#include <variant>
#include <cstdlib>
#include <time.h>

#include "get_variant.h"

std::variant<int, std::string, std::vector<int>> get_variant()
{
    std::srand(time(nullptr));
    int random_variable = std::rand() % 3;

    std::variant<int, std::string, std::vector<int>> result;
    switch (random_variable)
    {
    case 0:
        result = 5;
        break;
    case 1:
        result = "string";
        break;
    case 2:
        result = std::vector<int>{1, 2, 3, 4, 5};
        break;
    default:
        break;
    }
    return result;
}

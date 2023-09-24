#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include <algorithm>

#include "get_variant.h"

int main()
{
    std::variant<int, std::string, std::vector<int>> generated_variant = get_variant();

    if (std::holds_alternative<int>(generated_variant))
    {
        int output_number = std::get<int>(generated_variant) * 2;
        std::cout << "Integer number's processing result: " << output_number << std::endl;
    }
    else if (std::holds_alternative<std::string>(generated_variant))
    {
        std::string output_string = std::get<std::string>(generated_variant);
        std::cout << "String's processing result: " << output_string << std::endl;
    }
    else if (std::holds_alternative<std::vector<int>>(generated_variant))
    {
        std::cout << "Vector's processing result: ";
        std::for_each(std::get<std::vector<int>>(generated_variant).begin(), std::get<std::vector<int>>(generated_variant).end(), [] (const int &elem) {std::cout << " " << elem;});
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Unknown result" << std::endl;
    }
    return 0;
}

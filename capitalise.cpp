#include <iostream>
#include <string>
#include <cctype> 

std::string capitalizeWords(const std::string& input) {
    std::string result;
    bool capitalizeNext = true;

    for (char ch : input) {
        if (std::isspace(ch)) {
            capitalizeNext = true;
            result += ch;
        } else if (capitalizeNext) {
            result += std::toupper(ch);
            capitalizeNext = false;
        } else {
            result += ch;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = capitalizeWords(input);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

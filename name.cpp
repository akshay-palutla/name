#include <iostream>
#include <string>

int main() {
    std::string name;

    // Prompt the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Display a greeting message
    std::cout << "Hello, " << name << "! Welcome to C++ programming!" << std::endl;

    return 0;
}

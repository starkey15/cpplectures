#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int age{};
    std::cout << "What is your age? ";
    std::cin >> age;

    if (age > 20)
    {
        std::cout << "Great! Buy the professor a drink!";
    }
    else
    {
        std::cout << "That's too bad.";
    }

    std::cout << std::endl;

    return 0;
}
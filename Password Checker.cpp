#include <iostream>
int main() {
    std::string password;
    std::cout << "Enter your password: ";
    std::cin >> password;

    if (password.length() < 8) {
        std::cout << "Password is too short. It must be at least 8 characters long." << std::endl;
    } else {
        std::cout << "Password is valid." << std::endl;
    }

    return 0;
}

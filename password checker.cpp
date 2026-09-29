#include <iostream>
#include <string>

int main()
{
    std::string password;
    bool i = false;

    while (i = true)
    {
        std::cout << "Enter your password\n";
        std::cin >> password;

        if (password.length() <= 8)
        {
            std::cout << "Password lenght should be more\n than 8 characters\n";
            i == true;
        }
        else if (password.find_first_of("!@#$%^&*()_+-={}|:)<") == std::string::npos)
        {
            std::cout << "Need atleast one strange character\n";
            i == true;
        }
        else if (password.find_first_of("QWERTYUIOPASDFGHJKLZXCVBNM") == std::string::npos)
        {
            std::cout << "Need atleast one uppercase letter\n";
            i == true;
        }
        else
        {
            std::cout << "Password accepted\n";
            i == false;
            return 0;
        }
    }
}
#include <iostream>

int main() {

    int x;
    x = 217;
    int y = 6;
    int age = 21;
    int year = 2023;
    int days = 7.4; // Gets trnucated to 7

    double price = 12.99;

    char grade = 'a';
    char initial = 'p';
    char curr = '1';

    bool inTime = false;
    bool powered = true;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << days << '\n';

    std::cout << price << '\n';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << curr << '\n';

    std::cout << inTime << '\n';
    std::cout << powered << '\n';

    std::string name = "Paul";
    std::string middle = " Alan";
    std::string surname =  " Thomas";
    std::cout << "Hello, " << name << middle << surname << '\n';

    return 0;
}

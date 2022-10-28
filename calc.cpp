#include <iostream>

int main() {

    const double PI  = 3.14159;
    const int LIGHT_SPEED = 299792;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << "\n";
    std::cout << LIGHT_SPEED  << "\n";

    return 0;

}
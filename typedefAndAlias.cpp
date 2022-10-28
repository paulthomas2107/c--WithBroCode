#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int> > pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{

    //pairlist_t pairlist_t;

    text_t firstName = "Paul";
    std::cout << firstName << "\n";

    number_t age = 12;
    std::cout << age << "\n";

    return 0;
}
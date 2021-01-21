#include <iostream>
#include <string>
#include "c-echo.h"
#include "c-count.h"

int main( int argv, char** argc)
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;
	

//------------new function for counting word---------------------

    std::cout << "Count of Output: " << count(echo(argv,argc)) << std::endl;

    return 0;
}

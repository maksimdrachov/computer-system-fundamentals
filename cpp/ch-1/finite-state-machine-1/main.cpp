#include "Light.hpp"
#include <iostream>

int main() 
{
    Light myLight;

    std::cout << "myLight: " << myLight.getCurrentState() << std::endl;

    myLight.toggle();

    std::cout << "myLight: " << myLight.getCurrentState() << std::endl;

    myLight.toggle();

    std::cout << "myLight: " << myLight.getCurrentState() << std::endl;

    myLight.toggle();

    std::cout << "myLight: " << myLight.getCurrentState() << std::endl;

    myLight.toggle();

    std::cout << "myLight: " << myLight.getCurrentState() << std::endl;

    
    return EXIT_SUCCESS;
}
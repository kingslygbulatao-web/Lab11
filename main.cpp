#include <iostream>

// car rating service

struct car
{
    int ModelYear;
    std::string Model;
    std::string Condition;
    int Rating;
}


int main() {

    int CarAmt;

    std::cout << "How many Cars are u looking at today? " << std::endl;
    std::cin >> CarAmt;
    
    for(int i = 0; i < CarAmt; i++){
        std::cout << i << " " << std::endl;
    }
}

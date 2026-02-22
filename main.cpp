#include <iostream>

int main(){

    int x = 10;
    
    int *ptr = nullptr;

    ptr = &x;

    *ptr = 6;

    std::cout << "int element: " << *ptr << std::endl;

    return 0;


}
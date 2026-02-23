#include <iostream>

// car listing service for car dealers

const int NR_cars = 3;

struct CarDealer {
    std::string business;
    std::string BusinessAddress;
    std::string * cars;

    ~CarDealer() {
        if (cars) 
            delete [] cars;
        cars = nullptr;
    }
};

void inputCars(CarDealer *);
void displayCars(CarDealer *);

int main() {
    CarDealer *carlisting = new CarDealer[NR_cars];
    
    for (int i = 0; i < NR_cars; i++)
        inputCars(&carlisting[i]);
    
    for (int i = 0; i < NR_cars; i++)
        displayCars(&carlisting[i]);
    
    return 0;
}

void inputCars(CarDealer * sptr) {
    static int nrStu = 1;
    std::cout << "Put business name: " << ":\n";
    getline(std::cin, sptr->business);
    std::cout << "business Address: ";
    std::cin >> sptr->BusinessAddress;
    sptr -> cars = new std::string[NR_cars];
    for (int i = 0; i < NR_cars; i++) {
        std::cout << "input car: " << i + 1;
        std::cin >> sptr->cars[i];
    }
    std::cin.ignore();
    std::cout << std::endl << std::endl;
    nrStu++;
}

void displayCars(CarDealer * MeMePtr) {
    std::cout << "Car Dealer info:\n";
    std::cout << "Business: " << MeMePtr->business << std::endl;
    std::cout << "Business Address: " << MeMePtr->BusinessAddress << std::endl;
    for (int i = 0; i < NR_cars; i++){
        std::cout << "Car: " << i + 1 << ": "; 
        std::cout << MeMePtr->cars[i] << std::endl;
    std::cout << std::endl << std::endl;
}
}
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

void inputCars(Cars *);
void displayCars(Cars *);

int main() {
    CarDealer *carlisting = new CarDealer[NR_cars];
    
    for (int i = 0; i < NR_cars; i++)
        inputStudent(&carlisting[i]);
    
    for (int i = 0; i < cars; i++)
        displayStudent(&roster[i]);
    
    return 0;
}

void inputCars(Cars * sptr) {
    static int nrStu = 1;
    cout << "Put business name: " << nrStu << ":\n";
    cout << "Name: ";
    getline(cin, sptr->business);
    cout << "business that is being accessed: ";
    cin >> sptr->business;
    sptr -> cars = new std::string[NR_cars];
    for (int i = 0; i < NR_GRADES; i++) {
        cout << "input car: " << i + 1;
        cin >> sptr->grades[i];
    }
    cin.ignore();
    cout << endl << endl;
    nrStu++;
}

void displayCars(Cars * MeMePtr) {
    cout << "Car Dealer info:\n";
    cout << "Business: " << sptr->business << endl;
    cout << "Business Address: " << sptr->BusinessAddress << endl;
    for (int i = 0; i < NR_cars; i++)
        cout << "Car: " << i + 1 << ": " 
             << sptr->cars[i] << endl;
    cout << endl << endl;
}
#include <iostream>

// car listing service

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
    std::cout << "Put business name: " << nrStu << ":\n";
    std::cout << "Name: ";
    getline(std::cin, sptr->business);
    std::cout << "business that is being accessed: ";
    std::cin >> sptr->business;
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
    std::cout << "Business: " << MeMePtr->cars << std::endl;
    std::cout << "Business Address: " << MeMePtr->BusinessAddress << std::endl;
    for (int i = 0; i < NR_cars; i++)
        std::cout << "Car: " << i + 1 << ": " 
             << MeMePtr->cars[i] << std::endl;
    std::cout << std::endl << std::endl;
}

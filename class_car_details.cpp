#include <iostream>
using namespace std;
class Car {
    public:
        string brand;
        string model;
        string color;
        int price;
        int mileage;
        int year;

};
int main() {
    Car c1;
    cout << "Enter Brand of Car 1:";
    cin >> c1.brand;
    cout << "Enter Year of Car 1:";
    cin >> c1.year;
    cout << "Enter Model of Car 1:";
    cin >> c1.model;
     getchar();
    cout << "Enter Color of Car 1:";
    cin >> c1.color;
    cout << "Enter Price of Car 1:";
    cin >> c1.price;
    cout << "Enter Mileage of Car 1:";
    cin >> c1.mileage;
    cout << endl;
    Car c2;
    cout << "Enter Brand of Car 2:";
    cin >> c2.brand;
    cout << "Enter Year of Car 2:";
    cin >> c2.year;
    cout << "Enter Model of Car 2:";
    cin >> c2.model;
    cout << "Enter Color of Car 2:";
    cin >> c2.color;
    cout << "Enter Price of Car 2:";
    cin >> c2.price;
    cout << "Enter Mileage of Car 2:";
    cin >> c2.mileage;
    cout << endl;
    cout << "Details of Car:"<< endl;
    cout << "Brand of Car: "<< c1.brand << endl;
    cout << "Year of Car: "<< c1.year << endl;
    cout << "Model of Car: "<< c1.model << endl;
    cout << "Color of Car: "<< c1.color << endl;
    cout << "Price of Car: "<< c1.price << endl;
    cout << "Mileage of Car: "<< c1.mileage << endl;
    cout << endl;
    cout << "Brand of Car: "<< c2.brand << endl;
    cout << "Year of Car: "<< c2.year << endl;
    cout << "Model of Car: "<< c2.model << endl;
    cout << "Color of Car: "<< c2.color << endl;
    cout << "Price of Car: "<< c2.price << endl;
    cout << "Mileage of Car: "<< c2.mileage << endl;
    return 0;
}
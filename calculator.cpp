#include <iostream>
using namespace std;
class Calc {
public:
    float a, b;
    float add() {
        return a + b;
    }
    float subtract() {
        return a - b;
    }
    float multiply() {
        return a * b;
    }
    float divide() {
        if (b != 0) {
            return a / b;
        } 
        else {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
    }
            
};
    int main(){
        Calc c1;
        cout << "Enter First Number: ";
        cin >> c1.a;
        cout << "Enter Second Number: ";
        cin >> c1.b;
        int choice;
        while (1)
        {
        cout << "Choose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch(choice){
            case 1:
            cout << "Addition: " << c1.add() << endl<< endl;
            break;
            case 2:
            cout << "Subtraction: " << c1.subtract() << endl<< endl;
            break;
            case 3:
            cout << "Multiplication: " << c1.multiply() << endl<< endl;
            break;
            case 4:
            cout << "Division: " << c1.divide() << endl<< endl;
            break;
            case 5:
            cout << "Exiting the program." << endl;
            return 0;
            break;
            default:
            cout << "Invalid choice. Please select a valid operation." << endl;
            break;
        } 
    }
    }
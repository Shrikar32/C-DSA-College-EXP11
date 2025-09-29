#include <iostream>
using namespace std;
class Rectangle {
public:
    float length;
    float width;

    float area() {
        return length * width;
    }
};
int main() {
    Rectangle rect1, rect2;

    cout << "Enter length and width of Rectangle 1: ";
    cin >> rect1.length >> rect1.width;

    cout << "Enter length and width of Rectangle 2: ";
    cin >> rect2.length >> rect2.width;

    cout << endl;
    if(rect1.length <= 0 || rect1.width <= 0 || rect2.length <= 0 || rect2.width <= 0) {
        cout << "Length and width must be positive numbers." << endl;
        return 0;
    }
    if(rect1.length == rect1.width ){
        cout << "Rectangle 1 is a Square." << endl;
    } 
    if(rect2.width == rect2.length ){
        cout << "Rectangle 2 is a Square."<< endl;
    }
    if(rect1.length == rect2.length && rect1.width == rect2.width) {
        cout << "Both rectangles are identical." << endl<< endl;
    }
    

    float area1 = rect1.area();
    float area2 = rect2.area();
    cout << "Area of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 << endl<< endl;
    if(area1 > area2){
        cout << "Rectangle 1 has a larger area." << endl;
    } else if(area1 < area2) {
        cout << "Rectangle 2 has a larger area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }


    return 0;
}
#include <iostream>
using namespace std;
class Cube {
    float side=7;
public:
    float volume() {
        return side * side * side;
    }

}; 
int main() {
    Cube c1;
    float v1 = c1.volume();
    cout << "Volume of Cube 1: " << v1 << endl;
    return 0;
}
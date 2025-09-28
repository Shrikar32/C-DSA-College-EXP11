
#include<iostream>
using namespace std;
class Student {
public:
    string name;
    string branch;
    string subject;
    string year;
    float resut;
};
int main(){
    Student s1;
    s1.name = "Shrikar Mujumdar";
    s1.branch = "Electronics & Telecomunication Engineering";
    s1.subject = "C++ & Data Structures";
    s1.year = "Second Year";
    s1.resut = 8.5;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.resut << endl << endl;
    Student s2;
    s2.name = "Harsh Kumar";
    s2.branch = "Computer Engineering";
    s2.subject = "Python";
    s2.year = "Second Year";
    s2.resut = 8.0;
    cout << "Name: " << s2.name << endl;
    cout << "Branch: " << s2.branch << endl;
    cout << "Subject: " << s2.subject << endl;
    cout << "Year: " << s2.year << endl;
    cout << "Result: " << s2.resut << endl;
    return 0;
}

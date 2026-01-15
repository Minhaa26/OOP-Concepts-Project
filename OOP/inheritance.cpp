#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int id;
};

int main() {
    Student s;
    s.name = "Ahmed";
    s.id = 10;

    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;

    return 0;
}


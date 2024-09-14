#include <iostream>
using namespace std;


class Person {
    public:
    string name;
    int age;
    // constructor with only name and default age
    Person(string name) {
        this -> name = name;
        age = 18;
    }
    //constructor with both name and age
    Person(string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    //getters and setters
    int getAge(int age) {
        return age;
    }

    void setAge() {
        this -> age = age;
    } 

    string getName(string name) {
        return name;
    }

    void setName() {
        this -> name = name;
    }

    void displayInfo() {
        cout << "NAME: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1("pooja");
    Person p2("ASHIK" , 23);
    p1.displayInfo();
    p2.displayInfo();
    return 0;
}
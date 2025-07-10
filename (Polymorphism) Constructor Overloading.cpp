//Constructor Overloading -- Having multiple constructors in the same class with different parameters.
//Example of Polymorphism
#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
    	cout<<"Default Constructor"<<endl;
    }

    // Parameterised constructor
    Student(string n, int a) {
    	cout<<"Parameterised constructor"<<endl;
    }
};

int main() {
    Student s1; // calls default constructor
    Student s2("Ali", 20); // calls parameterised constructor

    return 0;
}


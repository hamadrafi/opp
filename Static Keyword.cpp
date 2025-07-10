//Static Keyword --- The static keyword makes a variable or function belong to the class, not to any specific object
//If a variable is static -- all objects use the same variable (only one copy exists).
//If a function is static -- it can be called without creating an object.


//Static in a function keeps the variable’s value permanent between function calls.
#include<iostream>
using namespace std;

void demo() {
    static int x = 1; // static variable
    cout << x << endl;
        x++;
}

int main() {
    demo(); // prints 1
    demo(); // prints 2
    demo(); // prints 3
    return 0;
}


//Static in a class makes a variable or function belong to the class itself, shared by all objects.”
//#include<iostream>
//using namespace std;
//
//class A {
//    public:
//        static int x; // static variable
//
//        void show() {
//            x = x + 1;
//        }
//};
//
//// define static variable outside class
//int A::x = 0;
//
//int main() {
//    A obj1;
//    A obj2;
//
//    obj1.show(); // x = 1
//    obj2.show(); // x = 2
//
//    cout << obj1.x << endl; // 2
//    cout << obj2.x << endl; // 2
//    cout << A::x << endl;   // 2 (access using class name)
//
//    return 0;
//}


//Virtual Function --A function in the parent class that is declared with virtual keyword.
//It can be overridden in the child class.
//It helps to call the correct function at runtime, based on the object type.
//Runtime Polymorphism Eg
#include<iostream>
#include<string>
using namespace std;
class Parent {
	public:
	virtual void display(){
		cout<<"Parent";
	}
};
class Child : public Parent{
	public:
	void display( ){
        cout<<"Child";
	}
};
int main(){
	Child c1;//Change Class then Parent func will be called
	c1.display();//Child Func will be called overide the parent one function 
	
}

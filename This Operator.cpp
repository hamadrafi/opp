//This Pointer-- Used within the class to refer to the current obj
//need?We use this to clearly refer to the current object’s property 
//when the parameter name is same as the property name — to avoid confusion.
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
	Person(string name,int age){
	this->name=name;//para and obj properties name are same compiler will be confused
	this->age=age;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	}
};
int main()
{
	Person p1("Hamad Rafi",21);
	p1.display();
	return 0;
}


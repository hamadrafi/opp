//Inheritance -- data and member funcs are passed from base to derived class.
//First Base class constructor will be created and then the derived one.
//In Destructor it is opposite.
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
	Person(string name,int age){
		cout<<"Parent Class Constructor"<<endl;
		this->name=name;
		this->age=age;
	}
};
class Student : public Person{
	public:
	int rollno;
	
	Student(string name,int age,int rollno):Person(name,age)//Calling Custom Based Constructor
	{
		cout<<"Child Class Constructor"<<endl;
		this->rollno=rollno;
	}
	void display(){
		cout<<"Name :"<<name<<endl;
		cout<<"Age :"<<age<<endl;
		cout<<"Roll No :"<<rollno<<endl;
		
	}
	
};

int main(){
Student s1("Hamad Rafi",21,86);
s1.display();
return 0;
}

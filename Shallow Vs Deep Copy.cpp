//Shallow Copy: Copies the address (pointer) so both objects share the same memory.
//Deep Copy: Copies the actual data by creating a new memory allocation, so both objects are independent.

//Shallow Copy - Issue : " This shows that modifying s2 has affected s1 because shallow copy only copies the pointer address, not the actual data."
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		double *cgpaptr;
	Student (string n,double c)//Parameterized Const to catch the pass values
	{
		name=n;
		cgpaptr=new double;
		*cgpaptr=c;
	}
	Student(Student &obj)//Custom Copy to make a copy by reference
	{
		this->name=obj.name;
		this->cgpaptr=obj.cgpaptr;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Cgpa: "<<*cgpaptr<<endl;
	}
};
int main(){
	Student s1("Ahmed",3.45);
	Student s2(s1);//ahmed cgpa we changed
	s2.display();
	*(s2.cgpaptr)=9.2;
	s2.display();
	return 0;
}


//Deep Copy - Solution : "This shows that deep copy creates a separate memory allocation, so modifying s2 does not affect s1."
#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		double *cgpaptr;
	Student (string n,double c)//Parameterized Const to catch the pass values
	{
		name=n;
		cgpaptr=new double;
		*cgpaptr=c;
	}
	Student(Student &obj)//Custom Copy to make a copy by reference
	{
		this->name=obj.name;
		cgpaptr=new double;
		*cgpaptr=*obj.cgpaptr;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Cgpa: "<<*cgpaptr<<endl;
	}
};
int main(){
	Student s1("Ahmed",3.45);
	Student s2(s1);//Ali cgpa we changed
	s2.display();
	s2.name="Ali";
	*(s2.cgpaptr)=9.2;
	s2.display();
	return 0;
}

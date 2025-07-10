//Copy Constructor-- Copy Properties of one obj into another
//1)Custom Copy Constructor 2)Defualt Copy Constructor
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;	
	Person(string n,int a){
		name=n;
		age=a;
	}
	Person(Person &origobj1)//Pass by Reference
	{
		//Custom Copy Constructor
		cout<<"Custom Copy Constructor"<<endl;
		this->name=origobj1.name;
		this->age=origobj1.age;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	}
};
int main()
{
	Person p1("Ali",21);
	Person p2(p1);//Custom Copy Constructor
//	Person p2(p1);//default copy constructor invoke by the compiler
	p2.display();
	return 0;
}


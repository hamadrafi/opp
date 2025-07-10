//Types of Constructor 
//1)Non Parameterized, 2)Parameterized , 3)Copy
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		
		string name;
		int age;
	//non-parameterized--without parameters
	Person(){
		cout<<"Hey! Non Parameterized Constructor Here..."<<endl;
		name="Hamad Rafi";
		age=21;
	}
	//parameterized--with paramters
		Person(string n,int a){
		cout<<"Hey! Parameterized Constructor Here..."<<endl;
		name=n;
		age=a;
	}
	void display(){
		cout<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	}
};
int main()
{
	Person p1;//Constructor Called
	Person p2("Hamad",20);//Only called when obj is created automatically
	p1.display();
	p2.display();
	return 0;
}


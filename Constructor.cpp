//Constructor-Method that automatically invokes when obj is created and memory is allocated to obj.
//Used for intializing Purpose. 
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
	Person(){
		cout<<"Hey! Constructor Here..."<<endl;
		name="Hamad Rafi";
		age=21;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age;
	}
};
int main()
{
	Person p1;//Constructor Called
	Person p2;//Only called when obj is created automatically
	p1.display();
	return 0;
}


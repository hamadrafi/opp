#include<iostream>
#include<string>
using namespace std;
class Employee{
	// properties/attributes
	private:
		double salary;
	public:
	string name;
	string dept;
	string subject;
	// methods/member functions
	void changeDept(string newDpt){
		dept=newDpt;
	}
	void display(){
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee Department: "<<dept<<endl;
	}
};
int main(){
	Employee e1;
	e1.name="Hamad Rafi";
	e1.dept="Software Engineering";
	e1.display();
	return 0;
}

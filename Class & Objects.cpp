#include<iostream>
#include<string>
using namespace std;
class Teacher{
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
	cout<<"Teacher Name: "<<name<<endl;
	cout<<"Teacher Department: "<<dept<<endl;
	cout<<"Teacher Subject: "<<subject<<endl;
	}
};
int main(){
	Teacher t1;
	t1.name="Hamad Rafi";
	t1.dept="Software Engineering";
	t1.subject="C++";
	t1.display();
	return 0;
}

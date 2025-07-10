//Abstraction -- Hiding unneccassry details and showing only important ones.
//Done by Acess modifiers  
#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
};
class Student:public Person{
	private:
	string  address;
	
	public:
	void setaddress(string a){
		address=a;
	}
	string getaddress(){
		return address;
	}
	};
int main(){
	Student s1;
	s1.name="ali";
	s1.age=21;
	s1.setaddress("Lahore");
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Age: "<<s1.age<<endl;
	cout<<"Address: "<<s1.getaddress()<<endl;
	return 0;
}

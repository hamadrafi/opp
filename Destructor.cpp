//Destructor--Called Automatically and free the memory when the obj is no longer in use
//Compiler built defualt destructor to free statically allocated memory.
//But for dynamically allocated memory we use Custom Destructor with keyword delete 
//Exectued after the main function 

//#include<iostream>
//#include<string>
//using namespace std;
//class Student{
//	public:
//		string name;
//		int age;
//	Student(string n,int a){
//		name=n;
//		age=a;
//	}
//	~Student(){
//		cout<<"Default Deconstructor for Statically Memory Allocated to Objects";
//	}
//	void display(){
//		cout<<"Name: "<<name<<endl;
//		cout<<"Age: "<<age<<endl;
//	}
//};
//int main(){
//	Student s1("Hamad Rafi",21);
//	s1.display();
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		int *age;
	Student(string n,int a){
		name=n;
		age=new int;
		*age=a;
	}
	~Student(){
		cout<<"Custom Deconstructor for Dynamic Memory Allocated to Objects";
		delete age;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<*age<<endl;
	}
};
int main(){
	Student s1("Hamad Rafi",21);
	s1.display();
	return 0;
}

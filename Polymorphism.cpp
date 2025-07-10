//Polymorphism-- means “many forms”. In OOP, it allows the same function or same name constructors to behave differently based on context.
//Types of Polymorhism --1)Compile Time(eg Function Overlaoding) 2)Runtime Polymorphsim
//Constructor Overloading is an eg of polymorphism.

//Compile Time Polymorphism -- Polymorphism where function call is resolved at compile time.
//Eg Function Overloading, Operator Overloading

//#include<iostream>
//#include<string>
//using namespace std;
//class Print {
//	public:
//	void display(int x){
//		cout<<"Int X:"<<x<<endl;
//	}
//		void display(int x,int y ){
//		cout<<"Int X:"<<x<<endl;
//		cout<<"Int Y:"<<y<<endl;
//	}
//};
//int main(){
//	Print p1;
//	p1.display(1);//First Func will be called 
//	p1.display(1,2);//Second Func will be called
//}


//Runtime Polymorphsim --Polymorphism where function call is resolved at run time.
//Eg Function Overiding -- when child class func overides the parent class func decided at runtime due to objects 
#include<iostream>
#include<string>
using namespace std;
class Parent {
	public:
	void display(){
		cout<<"Parent";
	}
};
class Child : public Parent{
	public:
	void display( ){
        cout<<"Child";
	}
};
int main(){
	Child c1;
	c1.display();//Child Func will be called 
	
}

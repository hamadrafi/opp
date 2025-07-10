//Types of Inheritance
//Single Inheritance --  when one child class inherits from one parent class.
//#include<iostream>
//#include<string>
//using namespace std;
//class Person{
//	public:
//		string name;
//		int age;
//};
//class Student :public Person{
//	public:
//		int rollno;
//	 	
//};
//int main(){	
//Student s1;
//s1.name="Hamad";
//s1.age=21;
//s1.rollno=86;
//cout<<"Name: "<<s1.name<<endl;
//cout<<"Age: "<<s1.age<<endl;
//cout<<"Roll No : "<<s1.rollno<<endl;
//	return 0;
//}


//Multilevel Inheritance -- class inherits from the parent class, and the parent class inherits from the grandparent class.
//Grandparent -> Parent -> Child.
//#include<iostream>
//#include<string>
//using namespace std;
//class Person{
//	public:
//		string name;
//		int age;
//};
//class Student :public Person{
//	public:
//		int rollno;
//	 	
//};
//class GradStudent:public Student{
//	public:
//		string researchArea;
//};
//int main(){	
//GradStudent g1;
//g1.name="Hamad";
//g1.age=21;
//g1.rollno=86;
//g1.researchArea="IOT";
//cout<<"Name: "<<g1.name<<endl;
//cout<<"Age: "<<g1.age<<endl;
//cout<<"Roll No : "<<g1.rollno<<endl;
//cout<<"Research Area : "<<g1.researchArea<<endl;
//	return 0;
//}

//Multiple Inheritance -- 1 child inherits from multiple parents.
//#include<iostream>
//#include<string>
//using namespace std;
//class Student{
//	public:
//		string name;
//		int age;
//};
//class Teacher {
//	public:
//		int rollno;
//	 	
//};
//class TA:public Student,public Teacher{
//	public:
//		string taname;
//};
//int main(){	
//TA t1;
//t1.taname="Ali";
//t1.age=21;
//t1.rollno=86;
//cout<<"Name: "<<t1.taname<<endl;
//cout<<"Age: "<<t1.age<<endl;
//cout<<"Roll No : "<<t1.rollno<<endl;
//	return 0;
//}

//Hierarcial Inheritance -- when multiple child classes inherit from a single parent class.
//#include<iostream>
//#include<string>
//using namespace std;
//class Person{
//	public:
//		string name;
//		int age;
//};
//class Student:public Person {
//	public:
//		int rollno;
//	 	
//};
//class Teacher:public Person{
//	public:
//		double salary ;
//};
//int main(){	
//Teacher t1;
//t1.name="Ali";
//t1.age=21;
//t1.salary=25000;
//cout<<"Name: "<<t1.name<<endl;
//cout<<"Age: "<<t1.age<<endl;
//cout<<"Salary : "<<t1.salary<<endl;
//	return 0;
//}































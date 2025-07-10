//Abstraction -- Only made for inheritance for other classes donot create any object for itself.
//Abstraction can also be done by using abstract class
//A class with pure virtual function automatically becomes abstract class.
#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void show()=0;
};
class Circle:public Shape{
	public:
		void show(){
			cout<<"Circle Class";
		}
};
int main(){
	Circle s1;
	s1.show();
	return 0;
}


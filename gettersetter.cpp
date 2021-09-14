#include <iostream>
using namespace std ;

class Student
{
private:
	string name;
	int age;
public:
	Student(string n,int a)
	{
		name = n ;
		age = a ;
	}
	void printDetails()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
	}
	void setname(string n)
	{
		this->name = n;
	}
};


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Student o("Hello",18);
	o.printDetails();
	o.setname("Hemanth");
	o.printDetails();
	return 0;
}
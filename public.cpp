#include <iostream>
using namespace std ;
/*
Access Specifier
	Public
	Private
	Protected
*/
class Student
{
public:
	string name;
	int age;

	void display()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Age  :"<<age<<endl;
	}
	void getdetails()
	{
		cin>>name>>age;
	}
};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	Student O;
	O.getdetails();
	O.display();
}

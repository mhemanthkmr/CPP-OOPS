#include <iostream>
using namespace std ;
/*
Access Specifier
	Public It can access by all class
	Private It Can Access only in within the class
	Protected
*/
class Student
{
private:
	string name;
	int age;

public:
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
	return 0;
}
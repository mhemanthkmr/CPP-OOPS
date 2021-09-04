#include <iostream>
using namespace std ;
// :: Scope Resolution Operator in C++
class Student
{
private:
	string name;
	int m1,m2,m3,total;
	float average;
public:
	void getdetails()
	{
		cin>>name>>m1>>m2>>m3;
	}
	void display(); // Using Scope Operator
};
void Student::display()
{
	total = m1+m2+m3;
	average = total/3.0;
	cout<<name<<endl<<total<<endl<<average;
}
int main()
{
	
	Student o ;
	o.getdetails();
	o.display();
}
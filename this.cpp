#include <iostream>
#include <stdlib.h>
using namespace std ;
long add(long,long);
class Employee
{
public:
	int id;
	string name;
	int age;

	void getdetails(int x , string y, int z)
	{
		this->id = x;
		this->name = y;
		this->age = z;
	}
	void display()
	{
		cout<<id<<" "<<name<<" "<<age<<endl;
	}
};
void swap(int x,int y)
{
	int temp = x;
	x = y ;
	y = temp;
}
void same()
{
	long x,y,c;
	cin>>x>>y;
	cout<<"Before Swapping A and B"<<endl;
	cout<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<"After Swapping A and B"<<endl;
	cout<<x<<" "<<y<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	
	same();
	return 0;
}
long add(long c, long g)
{
	long sum;
	sum = c+g;
	return sum;
}
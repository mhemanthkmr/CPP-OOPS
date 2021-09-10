#include <iostream>
#include <stdlib.h>
using namespace std ;

class Shape
{
public:
	float length,bredth,radius;
	Shape()
	{
		length = 0;
		bredth = 0;
		radius = 0;
	};	
};
class Rectangle:public Shape
{
public:
	void getdetails()
	{
		cin>>length>>bredth;
	}
	float area()
	{
		return length*bredth;
	}
};

class Square:public Shape
{
public:
	void getdetails()
	{
		cin>>length;
	}
	float area()
	{
		return length*length;
	}
};
class Circle:public Shape
{
public:
	void getdetails()
	{
		cin>>radius;
	}
	float area()
	{
		return 2*radius*radius;
	}
};

struct Rectanglee
{
	int length;
	int bredth;
};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	
	int a[5]={1,2,3,4,5};
	Circle *p;
	Circle obj;
	p = &obj;
	p->getdetails();
	cout<<p->area()<<endl;
	return 0;
}
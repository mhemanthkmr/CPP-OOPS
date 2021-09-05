#include <iostream>
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
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	
	Rectangle rec;
	Square squ;
	Circle cir;
	rec.getdetails();
	cout<<rec.area()<<endl;
	squ.getdetails();
	cout<<squ.area()<<endl;
	cir.getdetails();
	cout<<cir.area()<<endl;
	

	return 0;
}
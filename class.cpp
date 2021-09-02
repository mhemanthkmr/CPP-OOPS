#include <iostream>
using namespace std ;
// Basic Class Example
// 1. Area of a Circle
// 2. Cicumference of a Circle
class Circle
{
private:
	float radius;
public:
	float area()
	{
		cin>>radius;
		return 3.14*radius*radius;
	}
	float circumference()
	{
		return 2*3.14*radius;
	}
};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Circle o;
	cout<<"Area of Circle :"<<o.area()<<endl;
	cout<<"Circumference of Circle : "<<o.circumference()<<endl;
	return 0;
}

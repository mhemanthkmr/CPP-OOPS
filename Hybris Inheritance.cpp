#include <iostream>
using namespace std ;
/*

Inheritance

Inheritance is the process by which object of one class 
acquired the properties of another class .

There are Five Type of Inheritance 

1. Single Inheritance 
2. Multiple Inheritance
3. Multolevel Inheritance
4. Hierarcichal Inheritance
5. Hybrid Inheritance 
*/


class GrandFather
{
public:	
	void House()
	{
		cout<<"Have 3BHK House"<<endl;
	}
};
class Father:public GrandFather
{
public:
	void Land()
	{
		cout<<"2 Acrs Land"<<endl;
	}
};
class Mother
{
public:
	void Gold()
	{
		cout<<"25 Grams of Gold"<<endl;
	}
};
class Son:public Father,public Mother
{
public:
	void Car()
	{
		cout<<"Have Audi A6 Car"<<endl;
	}
};

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	

	Son o;
	o.Car();  
	o.Land(); 
	o.House();
	o.Gold();

	return 0;
}
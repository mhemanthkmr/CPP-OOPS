#include <iostream>
using namespace std ;
class Math
{
private:
	int a,b,c;
public:
	Math()   // Default Constructor
	{
		a = 0;
		b = 0;
	}
	Math(int x,int y) //Parameterized Constructor
	{
		a = x;
		b = y;
	};
	Math(Math &x) //Copy Constructor
	{
		a = x.a;
		b = x.b;
	};
	void add()
	{
		c = a+b;
		cout<<c<<endl;
	}
	
};
// Note : Whenever the Object is created the constructed will be run
class MaxMin
{
private:
	int a,b,c;
public:
	MaxMin() //Default Constructor
	{
		a = 0;
		b = 0;
		c = 0;
		cout<<"Object Created"<<endl;
	};
	MaxMin(int x,int y,int z) //Parameterized Constructor
	{ 
		a = x;
		b = y;
		c = z;
		cout<<"Object Created"<<endl;
	}
	MaxMin(MaxMin &x) //Copy Constructor;
	{
		a = x.a;
		b = x.b;
		c = x.c;
		cout<<"Object Created"<<endl;
	}
	void mx()
	{
		cout<<"Maximum : "<<max(a,max(b,c))<<endl;
	}
	void mn()
	{
		cout<<"Minimum : "<<min(a,min(b,c))<<endl;
	}

};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	MaxMin o1;
	MaxMin o2(5,25,55);
	MaxMin o3(o2);
	o1.mx();
	o2.mx();
	o3.mx();
	o1.mn();
	o2.mn();
	o2.mn();
	return 0;
}

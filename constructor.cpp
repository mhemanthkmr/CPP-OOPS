#include <iostream>
using namespace std ;
class Test
{
public:
	void display()
	{
		cout<<"Hello"<<endl;
	}
};
class Math:public Test
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
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	Math o1;
	Math o2(10,25);
	Math o3(o2);
	o1.add();
	o2.add();
	o1.display();
	o2.add();
	return 0;
}
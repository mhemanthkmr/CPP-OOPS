#include <bits/stdc++.h>
using namespace std ;
class A
{
public:
	void display() 
	{
		cout<<"Display Method in A";
	}
};
class B:virtual public A
{
public:
	void show() 
	{
		cout<<"Display Method in B";
	}
};
class C:virtual public A
{

};
class D:public C,public B
{

};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	D o;
	o.display();
	return 0;
}

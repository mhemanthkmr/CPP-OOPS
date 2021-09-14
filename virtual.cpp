#include <iostream>
using namespace std;
class Bike
{
public:
	virtual void start()
	{
		cout<<"Start the Bike"<<endl;
	}
};
class Apache:public Bike
{
public:
	void start()
	{
		cout<<"start Apache bike"<<endl;
	}
};
using namespace std ;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	Bike *o = new Apache;
	o->start();

	return 0;
}
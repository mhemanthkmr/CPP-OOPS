#include <iostream>
using namespace std ;
class A 
{
private:
	int x,y;
public:
	friend void start();
};
void start()
{
	A o;
	o.x = 5;
	o.y = 10;
	cout<<o.x<<" "<<o.y<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	start();
	A n;
	n.start();
	return 0;
}
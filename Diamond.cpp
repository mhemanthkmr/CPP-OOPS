#include <iostream>
using namespace std ;
class A
{
public:
	void display()
	{
		cout<<"This Method is shown in A"<<endl;
	}
};
class B:virtual public A
{
public:
	void show()
	{
		cout<<"This Method is shown in B"<<endl;
	}
};
class C:virtual public A
{
};
class D:public B,public C
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


/*

/home/magic/Documents/CPP-OOPS/Diamond.cpp: In function ‘int main()’:
/home/magic/Documents/CPP-OOPS/Diamond.cpp:32:4: error: request for member ‘display’ is ambiguous
   32 |  o.display();
      |    ^~~~~~~
/home/magic/Documents/CPP-OOPS/Diamond.cpp:6:7: note: candidates are: ‘void A::display()’
    6 |  void display()
      |       ^~~~~~~
/home/magic/Documents/CPP-OOPS/Diamond.cpp:6:7: note:                 ‘void A::display()’
[Finished in 397ms with exit code 1]
[shell_cmd: g++ "/home/magic/Documents/CPP-OOPS/Diamond.cpp" -o "/home/magic/Documents/CPP-OOPS/Diamond" && "/home/magic/Documents/CPP-OOPS/Diamond"]
[dir: /home/magic/Documents/CPP-OOPS]
[path: /home/magic/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin]

The Above Error is Ambigious error because of the compiler does not understand 
class b to a or class c to a this is called ambigious error


We Need to Solve This Problem

How to Solve ?

Use virtual keyword on both c and b the code is work
*/
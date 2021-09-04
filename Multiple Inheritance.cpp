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


/*
2. Multiple Inheitance

Definition:
	Multiple inheritance is a type of inheritance in which a class derives from more than one classes.
	As shown in the below diagram,class C is a Subclass that has class A and class B as its parent
 
				 		-------           		-------
				Class	|  A  |     	 Class	|  B  |      
						-------   				-------
							\					/
								\			/
									\	/
									-------
							Class	|  C  |  
									-------
*/

class Father
{
public:	
	void Fishing()
	{
		cout<<"Learn Fishing"<<endl;
	}
};
class Mother
{
public:
	void Cooking()
	{
		cout<<"Learn Cooking"<<endl;
	}
};
class Son:public Father,public Mother
{
public:
	void Coding()
	{
		cout<<"Learn Coding"<<endl;
	}
};

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	

	Son o;
	o.Fishing(); //He Learned Fishing From is Father 
	o.Cooking(); // He Learned Cooking from is Mother
	o.Coding();// He Learned Coding by himself;
	return 0;
}
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

1. Single Inheriitance 

		-------
Class	|  A  |  //Base Class or Parent Class or Super Class
		-------
		   |
		   |
		-------
Class	|  B  |  //Derived Class or Child Class or Sub Class
		-------

*/
//Example for Single Inheritance

class Father
{
public:	
	void House()
	{
		cout<<"Have 3BHK House"<<endl;
	}
};
class Son:public Father
{
public:
	void Car()
	{
		cout<<"Have Audi A6 Car :)"<<endl;
	}
};
// Son can access the both fathers house and his car this is called Single Inheritance.

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

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	

	Son o;
	Father o1;
	o.House();
	o.Car();
	return 0;
}
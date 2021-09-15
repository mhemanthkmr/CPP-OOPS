#include<stdio.h>
#include<stdlib.h>
int * func(int n)
{
	int *p;
	p = (int *)malloc(n*sizeof(int));
	return p;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	

	int *a;
	a = func(5);
	return 0;
}
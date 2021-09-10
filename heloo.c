#include <stdio.h>
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	
	int a,b; 
	int sum, sub, mul, mod; 
	float div; 
	printf("Enter values of a,b:"); 
	scanf("%d%d",&a,&b); 
	sum=a+b; 
	sub=a-b; 
	mul=a*b; 
	div=a/b; 
	mod=a%b; 
	printf("Sum=%d\n Sub=%d\n Mul=%d\n Div=%f\n Mod=%d\n",sum,sub,mul,div,mod); 
	return 0;
}
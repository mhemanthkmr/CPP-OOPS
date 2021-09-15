#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
void solve()
{
	int a,s;
	cin>>a>>s;
	int sum = 0,temp(0);
	// for (int i = 0; i < a+1; ++i)
	// {
	// 	for (int j = 0; j < a+1; ++j)
	// 	{
	// 		if (i+j == s and j+i == s) 
	// 		{
	// 			// cout<<i<<" "<<j<<endl;
	// 			sum++;
	// 		}
	// 	}
	// }
	// cout<<sum<<endl;
	if (s<a) sum = s;
	else 
	{
		temp = s - a ;
		sum = a - temp;
	}
	cout<<sum<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	

	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	
}
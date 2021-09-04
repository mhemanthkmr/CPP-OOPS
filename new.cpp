#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
void solve()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(a<=b and c<=d and e>=f)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif	
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
#include <iostream>
using namespace std ;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    int n;
    int t;
    cin >> n >> t;
    int **outer = new int*[n];
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        outer[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin>>outer[i][j];
        }
    }
    while(t--) {
        int out;
        int in;
        cin >> out >> in;
        cout << outer[out][in] << endl;
    }
}

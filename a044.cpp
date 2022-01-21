#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n;

	while(cin >> n){
		int res = round((pow(n, 3) + 5 * n + 6) / 6);
		cout << res << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, f, g;
	while(cin >> n){
		if(n == 1){
			cout << "1 1" << endl;
		} else {
			f = (n * n + n) / 2;
			g = (n * n * n + 3 * n * n + 2 * n) / 6;
			cout << f << " " << g << endl;
		}
	}
	return 0;
}
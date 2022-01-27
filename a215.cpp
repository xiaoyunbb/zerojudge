#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, sum, count;
	while(cin >> n >> m){
		sum = n;
		count = 1;
		while(sum <= m){
			sum += n + 1;
			n++;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
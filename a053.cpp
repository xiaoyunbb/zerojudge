#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	while(cin >> n){
		if(n <= 10){
			cout << n * 6 << endl;
		}
		else if(n <= 20){
			cout << 60 + (n - 10) * 2 << endl;
		}
		else if(n >= 40){
			cout << "100" << endl;
		}
		else{
			cout << 60 + 20 + (n - 20) << endl;
		}
	}
	return 0;
}
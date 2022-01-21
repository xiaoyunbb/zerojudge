#include <bits/stdc++.h>
using namespace std;

int main()
{
	int people, hat;
	while(cin >> people >> hat){
		if(people == hat) cout << hat << endl;
		else{
			cout << hat + 1 << endl;
		}
	}
	return 0;
}
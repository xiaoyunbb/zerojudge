#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum;
	string tmp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		for(int j = 0; j < tmp.length(); j++){
			if(j == 0) sum = tmp[j] - '0';
			else{
				sum *= (tmp[j] - '0');
			}
		}
		cout << sum << endl;
	}

	
	return 0;
}
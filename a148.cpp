#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, tmp;
	float sum;
	while(cin >> n){
		sum = 0;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			sum += tmp;
		}
		if(sum / n > 59) cout << "no" << endl;
		else cout << "yes" << endl;
	}
	return 0;
}
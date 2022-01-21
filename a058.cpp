#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, tmp;
	int mod0 = 0, mod1 = 0, mod2 = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		switch(tmp % 3){
			case 0:
				mod0++;
				break;
			case 1:
				mod1++;
				break;
			case 2:
				mod2++;
				break;
		}
	}
	cout << mod0 << " " << mod1 << " " << mod2 << endl;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	long long b, c;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		switch(a){
			case 1:
				cout << b + c << "\n";
				break;
			case 2:
				cout << b - c << "\n";
				break;
			case 3:
				cout << b * c << "\n";
				break;
			case 4:
				cout << b / c << "\n";
				break;
		}
	}
	return 0;
}
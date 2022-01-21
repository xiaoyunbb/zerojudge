#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int l, r;

	while(cin >> l >> r){
		int found = 0;
		for(int i = l; i <= r; i++){
			string s = to_string(i);
			int len = s.length();
			int sum = 0;
			count = 0;
			for(int j = 0; j < len; j++){
				sum += round(pow((s[j] - '0'), len));
			}
			if(i == sum) {
				found = 1;
				cout << i << " ";
			}
		}
		if(!found) {cout << "none" << endl;}
		else cout << endl;
	}
	return 0;
}
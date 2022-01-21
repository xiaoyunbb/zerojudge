#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int l, r;

	while(cin >> l >> r){
		int found = 0;						//有沒有找到Armstrong number，預設為0

		for(int i = l; i <= r; i++){
			string s = to_string(i);			//我使用string來分析數字，length即為位數
			int len = s.length();
			int sum = 0;

			for(int j = 0; j < len; j++){
				sum += round(pow((s[j] - '0'), len));	//每一位上數字^位數(s[j]是char，要-'0'後才會變int進行運算)
			}						//pow()是double，以防萬一我用round()把它變成最近的整數
			if(i == sum) {
				found = 1;
				cout << i << " ";
			}
		}
		if(!found) cout << "none" << endl;
		else cout << endl;
	}
	return 0;
}

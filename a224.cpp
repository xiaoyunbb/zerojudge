#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	while(cin >> str){
		string actualstr;
		int oddeven[26] = {0};
		int count = 0;
		for(int i = 0; i < str.length(); i++){
			if(str[i] > '@' && str[i] < '['){
				if(i == 0){
					actualstr = str[i] + 32;
				} else {
					actualstr += (str[i] + 32);
				}
			} else if (str[i] > '`' && str[i] < '{') {
				if(i == 0){
					actualstr = str[i];
				} else {
					actualstr += (str[i]);
				}
			} else continue;
		}	
		for(int i = 0; i < actualstr.length(); i++){
			oddeven[actualstr[i] - 'a']++;
		}
		for(int i = 0; i < 26; i++){
			if(oddeven[i] % 2 == 1){
				count++;
			}
		}
		if(count < 2){
			cout << "yes !" << endl;
		} else {
			cout << "no..." << endl;
		}
	}
	return 0;
}
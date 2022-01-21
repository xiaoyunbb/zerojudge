#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int tmp;
	cin >> s;
	for(int i = 0; i < s.length() - 1; i++){
		if(s[i] >= s[i + 1]) tmp = s[i] - s[i + 1];
		else tmp = s[i + 1] - s[i];
		cout << tmp;
	}
	cout << endl;
	//system("pause");
	return 0;
}
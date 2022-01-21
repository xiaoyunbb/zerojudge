#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	while(cin >> s){
		string rs = s;
		reverse(rs.begin(), rs.end());
		if(s == rs) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
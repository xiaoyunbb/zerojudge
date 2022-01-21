#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(cin >> s){
		int sum = 0;

		for(int i = 0; i < s.length(); i++){
			int tmp = s[i] - '0';
			if(i == s.length() - 1) sum += tmp;
			sum += (tmp * (8 - i));
		}	

		switch(sum % 10){
			case 0:
				cout << "BNZ" << endl;
				break;
			case 1:
				cout << "CIP" << endl;
				break;
			case 2:
				cout << "DOQ" << endl;
				break;
			case 3:
				cout << "ER" << endl;
				break;
			case 4:
				cout << "FS" << endl;
				break;
			case 5:
				cout << "GT" << endl;
				break;
			case 6:
				cout << "HU" << endl;
				break;
			case 7:
				cout << "JVX" << endl;
				break;
			case 8:
				cout << "KLY" << endl;
				break;
			case 9:
				cout << "AMW" << endl;
				break;
		}
	}
	return 0;
}


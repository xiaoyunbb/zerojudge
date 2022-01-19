#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(cin >> s){
		int sum = 0;
		switch(s[0]){
			case 'A':
				sum += 1;
				break;
			case 'B':
				sum += 10;
				break;
			case 'C':
				sum += 19;
				break;
			case 'D':
				sum += 28;
				break;
			case 'E':
				sum += 37;
				break;
			case 'F':
				sum += 46;
				break;
			case 'G':
				sum += 55;
				break;
			case 'H':
				sum += 64;
				break;
			case 'I':
				sum += 39;
				break;
			case 'J':
				sum += 73;
				break;
			case 'K':
				sum += 82;
				break;
			case 'L':
				sum += 2;
				break;
			case 'M':
				sum += 11;
				break;
			case 'N':
				sum += 20;
				break;
			case 'O':
				sum += 48;
				break;
			case 'P':
				sum += 29;
				break;
			case 'Q':
				sum += 38;
				break;
			case 'R':
				sum += 47;
				break;
			case 'S':
				sum += 56;
				break;
			case 'T':
				sum += 65;
				break;
			case 'U':
				sum += 74;
				break;
			case 'V':
				sum += 83;
				break;	
			case 'W':
				sum += 21;
				break;
			case 'X':
				sum += 3;
				break;
			case 'Y':
				sum += 12;
				break;
			case 'Z':
				sum += 30;
				break;
		}
		for(int i = 1; i < s.length(); i++){
			int tmp = s[i] - '0';
			if(i == s.length() - 1) sum += tmp;
			sum += (tmp * (9 - i));
		}	
		if(sum % 10 == 0){
			cout << "real" << endl;
		} else {
			cout << "fake" << endl;
		}
	}
	return 0;
}
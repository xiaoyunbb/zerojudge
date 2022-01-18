#include <iostream>
using namespace std;

int main()
{
	int month, date, luck;

	while(cin >> month >> date){
		luck = (month * 2 + date) % 3;
		switch(luck){
			case(0):
				cout << "普通\n";
				break;
			case(1):
				cout << "吉\n";
				break;
			case(2):
				cout << "大吉\n";
				break;
			default:
				break;	
		}
	}  

	return 0;                                                                                             
}
#include <iostream>
using namespace std;

int main()
{
	int year;

	while(cin >> year){
		if(((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)){
			cout << "閏年\n";
		} else{
			cout << "平年\n";
		}
	}  

	return 0;                                                                                             
}
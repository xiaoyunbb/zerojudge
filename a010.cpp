#include <iostream>
using namespace std;

int main()
{
	int n, div, pow;	

	while(cin >> n){
		div = 2;
		if(n == 1){
			cout << 1;
			break;
		}
		while(n > 1){
			pow = 0;
			while(n % div == 0){
				n /= div;
				pow++;
			}
			if(pow > 1){
				if(n != 1){
					cout << div << "^" << pow << " * ";
				}	
				else{
					cout << div << "^" << pow << endl;
				}
			}
			else if(pow == 1){
				if(n != 1){
					cout << div << " * ";
				}
				else{
					cout << div << endl;
				}
			}
			div++;
		}
		
	}
	return 0;
}
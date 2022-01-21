#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string I2B(int n){
	string binary = " ";
	int i = 0;
	while(n > 0){
		
		binary += to_string(n % 2);
		n /= 2;
		
	}
	reverse(binary.begin(), binary.end());
	return binary;
}

int main()
{
	int n;

	while(cin >> n){
		cout << I2B(n) << endl;
	}
	return 0;
}


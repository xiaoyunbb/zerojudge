#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, count, no;
	while(cin >> a >> b){
		count = 0;
		for(int i = a; i <= b; i++){
			no = 0;
			if(i == 1) continue;
			if(i == 2 || i == 3){
				count++;
			}
			else if(i % 6 != 1 && i % 6 != 5) continue;
			else{	
				for(int j = 2; j <= sqrt(i); j++){
					if(i % j == 0){
						no = 1;
						break;
					}
				}
				if(!no) count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}

// https://magiclen.org/prime-number/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, sum;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		int A = a;
		sum = 0;

		while(a * a >= A && a > 0){
			a--;
		}
		a++;
		sum = a * a;

		while(a * a <= b){
			sum += (a * a + 2 * a + 1);
			a++;
		}
		sum -= a * a;
		cout << "Case " << i + 1 << ": " << sum << endl;
	}
	return 0;
}
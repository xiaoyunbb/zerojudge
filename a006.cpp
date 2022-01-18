#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, d;
	int root1, root2;

	while(cin >> a >> b >> c){
		d = b * b - 4 * a * c;

		if(d > 0) {
			root1 = ((-1) * b + sqrt(d)) / (2 * a);
			root2 = ((-1) * b - sqrt(d)) / (2 * a);

			cout << "Two different roots x1=" << root1 << " , x2=" << root2 << "\n";
		} else if(d == 0) {
			root1 = (((-1) * b) / (2 * a));

			cout << "Two same roots x=" << root1 << "\n";
		} else {
			cout << "No real root\n";
		}
	}
	return 0;
}
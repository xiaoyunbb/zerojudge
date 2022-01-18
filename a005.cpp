#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[5];

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 4; j++){
			cin >> arr[j];
		}

		if(arr[1] - arr[0] == arr[2] - arr[1]) {
			arr[4] = arr[3] + (arr[1] - arr[0]);
		} 
		else if(arr[1] / arr[0] == arr[2] / arr[1]) {
			arr[4] = arr[3] * (arr[1] / arr[0]);
		}

		for(int j = 0; j < 5; j++) {
			cout << arr[j] << " ";
		}
		cout << "\n";
	}

	return 0;                                                                                             
}
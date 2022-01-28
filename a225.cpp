#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, min, minone;
	while(cin >> n){
		int arr[n];
		int tmp;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(arr[i] % 10 > arr[j] % 10){
					swap(arr[i], arr[j]);
				}
			}
		}
		/*
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
		*/
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(arr[i] % 10 == arr[j] % 10){
					if(arr[i] < arr[j]){
						swap(arr[i], arr[j]);
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;

	}
	return 0;
}
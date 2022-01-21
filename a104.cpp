#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, tmp;
	vector<int> arr;
	while(cin >> n){
		arr.clear();
		for(int i = 0; i < n; i++){
			cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end());
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

void getGradings(vector<int> arr);

void getGradings(vector<int> arr) {
	int n = (int)arr.size();

	for(int i = 0; i < n; i++) {
		if(arr[i] < 38) cout << arr[i] << endl;
		else {
			if(arr[i] % 5 > 2) cout << arr[i] + (5 - (arr[i] % 5)) << endl;
			else cout << arr[i] << endl;
		}
	}
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	vector<int> arr(n);
	int temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	getGradings(arr);
	return 0;
}
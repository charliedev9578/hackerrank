#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getDose(vector<int> arr , int k) {
	int n = (int)arr.size();
	sort(arr.begin() , arr.end());
	int dose = 0;
	if(arr[n-1] < k) {
		return 0;
	}
	for(int i = 0; i < n; i++) {
		if(arr[i] > k && dose < arr[i] - k) {
			dose = arr[i] - k;
		}
	}
	return dose;
}

int main(int argc, char const *argv[]) {
	int n;
	int k;
	cin >> n >> k;

	vector<int> arr(n);
	int temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getDose(arr , k) << endl;
	return 0;
}
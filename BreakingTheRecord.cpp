#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

void getRecords(vector<ll> arr) {
	int tempMin = arr[0];
	int tempMax = arr[0];
	int min = 0;
	int max = 0;

	for(int i = 1; i < (int)arr.size(); i++) {
		if(arr[i] > tempMax) {
			max++;
			tempMax = arr[i];
		}
		else if(arr[i] < tempMin) {
			min++;
			tempMin = arr[i];
		}
	}

	cout << max << " " << min << endl;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	vector<ll> arr(n);
	ll temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	getRecords(arr);
	return 0;
}
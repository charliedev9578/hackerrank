#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;

typedef long long int ll;

void getMiniMax(vector<ll> arr);

void getMiniMax(vector<ll> arr) {
	sort(arr.begin() , arr.end());
	ll max = 0;
	ll min = 0;

	for(int i = 0; i < 5; i++) {
		if(i != 0) {
			max += arr[i];
		}

		if(i != 4) {
			min += arr[i];
		}
	}

	cout << min << " " << max << endl;
}

int main(int argc, char const *argv[]) {
	vector<ll> arr(5);
	ll temp;

	for(int i = 0; i < 5; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	getMiniMax(arr);
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;

typedef long long int ll;

ll getTallestCandles(vector<ll> arr);


ll getTallestCandles(vector<ll> arr) {
	sort(arr.begin() , arr.end());
	ll n = (ll)arr.size();
	int max = arr[n - 1];
	ll count = 0;
	for(int i = n-1; n >= 0; i--) {
		if(arr[i] != max) {
			break;
		}
		count++;
	}

	return count;

}

int main(int argc, char const *argv[]) {
	ll n;
	cin >> n;
	vector<ll> arr(n);

	int temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getTallestCandles(arr) << endl;
	return 0;
}
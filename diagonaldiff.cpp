#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long int ll;

ll getDiff(vector<vector<int>> arr);

ll getDiff(vector<vector<int>> arr) {
	ll sum = 0;

	for(ll i = 0; i < (ll)arr.size(); i++) {
		sum += arr[i][i] - arr[i][(ll)arr.size() - i - 1];
	}

	return sum;
}

int main(int argc, char const *argv[]) {

	ll n;
	cin >> n;
	int temp;
	vector<vector<int>> arr(n);

	for(ll i = 0; i < n; i++) {
		arr[i] = vector<int>(n);

		for(ll j = 0; j < n; j++) {
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	cout << getDiff(arr) << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

void getAnswers(ll n , ll k , ll q , vector<ll> arr , vector<ll> queries) {
	k = k % n;
	for(ll i = 0; i < q; i++) {
		ll position;
		if(queries[i] < k) {
			position = n - (k - queries[i]);
		}
		else {
			position = queries[i] - k;
		}
		// cout << "position: " << position << endl;
		cout << arr[position] << endl;
	}
}

int main(int argc, char const *argv[]) {
	ll n;
	ll k;
	ll q;
	cin >> n >> k >> q;
	vector<ll> arr(n);
	vector<ll> queries(q);
	ll temp;
	for(ll i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}
	for(ll i = 0; i < q; i++) {
		cin >> temp;
		queries[i] = temp;
	}

	getAnswers(n , k , q , arr , queries);
	return 0;
}
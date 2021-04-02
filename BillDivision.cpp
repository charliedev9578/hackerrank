#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

void getResult(vector<ll> arr , ll k , ll price);

void getResult(vector<ll> arr , ll k , ll price) {
	ll n = (ll)arr.size();
	ll total = 0;
	for(ll i = 0; i < n; i++) {
		if( i == k) continue;
		total += arr[i];
	}

	if((ll)(total / 2) >= price) {
		cout << "Bon Appetit" << endl;
	}
	else {
		cout << price - (ll)(total / 2) << endl;
	}
}

int main(int argc, char const *argv[]) {
	ll n;
	ll k;

	cin >> n >> k;

	vector<ll> arr(n);
	ll temp;

	for(ll i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	ll price;
	cin >> price;
	getResult(arr , k , price);

	return 0;
}
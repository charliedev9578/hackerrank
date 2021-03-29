#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long int ll;

ll getSum(vector<ll> v);


ll getSum(vector<ll> v) {
	ll sum = 0;

	for(int i = 0; i < (int)v.size(); i++) {
		sum += v[i];
	}

	return sum;
}

int main(int argc, char const *argv[]) {

	int n;
	cin >> n;
	vector<ll> v;
	ll temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	cout << getSum(v) << endl;
	
	return 0;
}
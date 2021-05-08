#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

int getSeat(ll n , ll m, ll s) {
	s = (m % n) - 1 + s;

	if(s > n) {
		s = s - n ;
	}
	else if(s == 0) {
		s = n;
	}

	return s;
}

int main(int argc, char const *argv[]) {
	int t;
	cin >> t;
	ll n;
	ll m;
	ll s;
	for(int i = 0; i < t; i++) {
		cin >> n >> m >> s;

		cout << getSeat(n , m , s) << endl;
	}
	return 0;
}
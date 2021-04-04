#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

int getTurns(ll n , ll p) {
	int temp = (n%2 == 0) ? n : n + 1;
	int turns = 0;
	if(p == 1 || p == temp) {
		turns = 0;
	}
	else {
		if (p < (ll)(temp / 2) && (temp/2)%2 == 0) {
			turns = (ll)(p / 2);
		}
		else if(p <= (ll)(temp / 2) && (temp/2)%2 != 0) {
			turns = (ll)(p / 2);
		}
		else {
			p = (p%2 == 0) ? p : p - 1;
			turns = (ll)((temp - p) / 2);
			if(n%2 != 0) {
				turns -= 1;
			}
		}
	}

	return turns;
}


int main(int argc, char const *argv[]) {
	ll n;
	ll p;

	cin >> n >> p;
	cout << getTurns(n , p) << endl;	
	return 0;
}
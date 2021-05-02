#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

ll getDays(ll i , ll j , ll k) {
	string temp;
	ll reverseTemp;
	ll count = 0;
	for(ll x = i; x <= j; x++) {
		temp = to_string(x);
		reverse(temp.begin() , temp.end());
		reverseTemp = (ll)stoi(temp);

		if((x - reverseTemp)%k == 0) {
			count++;
		}
	}

	return count;
}

int main(int argc, char const *argv[]) {
	ll i;
	ll j;
	ll k;
	cin >> i; 
	cin >> j;
	cin >> k;

	cout << getDays(i , j , k) << endl;
	return 0;
}
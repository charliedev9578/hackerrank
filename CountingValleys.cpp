#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

int getValleys(string line , ll n);

int getValleys(string line , ll n) {
	int count = 0;
	int numValleys = 0;
	for(ll i = 0; i < n; i++) {
		if(line[i] == 'U') count++;
		else if(line[i] == 'D') {
			if(count == 0) {
				numValleys++;
			}
			count--;
		}
	}

	return numValleys;
}

int main(int argc, char const *argv[]) {
	string str_n;
	getline(cin , str_n);
	ll n = (ll)stoi(str_n);
	string line;
	getline(cin , line);
	
	cout << getValleys(line , n) << endl;

	return 0;
}
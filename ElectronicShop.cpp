#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

int getPrice(vector<ll> keyBoards , vector<ll> drivers , ll budget);

int getPrice(vector<ll> keyBoards , vector<ll> drivers , ll budget) {
	int m = (int)keyBoards.size();
	int n = (int)drivers.size();
	ll price = 0;
	sort(keyBoards.begin() , keyBoards.end());
	sort(drivers.begin() , drivers.end());
	if(budget < keyBoards[0] + drivers[0]) {
		return -1;
	}
	else {
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				ll temp = keyBoards[i] + drivers[j];
				if(temp > budget) break;
				else if(temp > price) price = temp;
			}
		}

		return price;
	}
}

int main(int argc, char const *argv[]) {
	ll budget;
	int m;
	int n;

	cin >> budget >> m >> n;
	vector<ll> keyBoards(m);
	vector<ll> drivers(n);
	ll temp;
	for(int i = 0; i < m; i++) {
		cin >> temp;
		keyBoards[i] = temp;
	}

	for(int i = 0; i < n; i++) {
		cin >> temp;
		drivers[i] = temp;
	}

	cout << getPrice(keyBoards , drivers , budget) << endl;
	return 0;
}
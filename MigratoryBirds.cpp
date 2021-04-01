#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

typedef long long int ll;

int getTypeCount(vector<int> arr);

int getTypeCount(vector<int> arr) {
	ll n = (ll)arr.size();
	int *temp = new int[5];
	for(int i = 0; i < 5; i++) temp[i] = 0;

	for(ll i = 0; i < n; i++) {
		if(arr[i] == 1) temp[0]++;
		else if(arr[i] == 2) temp[1]++;
		else if(arr[i] == 3) temp[2]++;
		else if(arr[i] == 4) temp[3]++;
		else temp[4]++;
	}

	int tempPos = 0;
	int tempCount = temp[0];

	for(int i = 1; i < 5; i++){
		if(temp[i] > tempCount) {
			tempPos = i;
			tempCount = temp[i];
		}
	}

	return tempPos + 1;
}

int main(int argc, char const *argv[]) {
	ll n;
	cin >> n;
	vector<int> arr(n);
	int temp;

	for(ll i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getTypeCount(arr) << endl;
	return 0;
}
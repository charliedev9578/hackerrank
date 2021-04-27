#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getHeight(int t) {
	if(t == 0) return 1;
	else if(t % 2 == 0) return 1 + getHeight(t - 1);
	else return 2 * getHeight(t - 1);
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;

	vector<int> arr(n);
	int temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	for(int i = 0; i < n; i++) {
		cout << getHeight(arr[i]) << endl;
	}

	return 0;
}
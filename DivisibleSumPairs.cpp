#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getDivisibleCount(vector<int> arr , int k);

int getDivisibleCount(vector<int> arr , int k) {
	int n = (int)arr.size();
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if((arr[i] + arr[j]) % k == 0)
				count++;
		}
	}

	return count;
}


int main(int argc, char const *argv[]) {
	int n;
	int k;

	cin >> n >> k;

	vector<int> arr(n);
	int temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getDivisibleCount(arr , k) << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getPairs(vector<int> arr);

int getPairs(vector<int> arr) {
	int numPairs = 0;
	vector<int> count;
	int n = (int)arr.size();
	sort(arr.begin() , arr.end());
	int temp = arr[0];
	count.push_back(0);
	int j = 0;

	for(int i = 0; i < n; i++) {
		if(arr[i] == temp) {
			count[j] += 1;
		}
		else {
			count.push_back(1);
			j++;
			temp = arr[i];
		}
	}

	for(int x = 0; x < (int)count.size(); x++) {
		numPairs += (int) (count[x] / 2);
	}

	return numPairs;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;

	int temp;
	vector<int> arr(n);

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getPairs(arr) << endl;
	return 0;
}
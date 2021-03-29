#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MAX_N = 10e6 + 5;

int arraySum(vector<int> v) {
	int sum = 0;

	for(int i = 0; i < (int)v.size(); i++) {
		sum += v[i];
	}
	return sum;
}

int main(int argc, char const *argv[]) {
	int n;
	int temp;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	cout << arraySum(v) << endl;

	return 0;
}
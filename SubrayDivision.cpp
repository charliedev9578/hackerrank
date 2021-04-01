#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getPaths(vector<int> arr , int d , int m);

int getPaths(vector<int> arr , int d , int m) {
	int count = 0;

	if(d < m) {
		// cout << "what the" << endl;
		count = 0;
	}
	else {
		for(int i = 0; i < (int)arr.size(); i++) {
			int j;
			int temp = 0;
			for(j = i; j < i + m; j++) {
				temp += arr[j];
			}
			if(temp == d) {
				count++;
			}
		}
		// cout << "hell" << endl;
		// if(count == 1) count = 0;
	}

	return count;
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

	int d;
	int m;
	cin >> d >> m;

	cout << getPaths(arr , d , m) << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

string getAnswer(vector<int> arr , int k) {
	int n = (int)arr.size();
	int count = 0;
	sort(arr.begin(), arr.end());
	for(int i = 0; i < n; i++) {
		if(arr[i] < 1) {
			count++;
		}
		else {
			break;
		}
	}

	if(count >= k) {
		return "NO";
	}

	return "YES";
}

int main(int argc, char const *argv[]) {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		int k;
		cin >> n >> k;
		vector<int> arr(n);
		int temp;
		for(int j = 0; j < n; j++) {
			cin >> temp;
			arr[j] = temp;
		}
		cout << getAnswer(arr , k) << endl;
	}
	return 0;
}
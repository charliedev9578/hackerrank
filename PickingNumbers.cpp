#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int arraySize(vector<int> arr);

int arraySize(vector<int> arr) {
	int n = (int)arr.size();
	int tempCount = 0;
	int count = 0;
	int element = arr[0];

	sort(arr.begin() , arr.end());

	for(int i = 0; i < n; i++) {
		if(arr[i] == element) {
			count++;
		}
		else {
			
			if(arr[i] - arr[i-1] == 1) {

			}
		}
	}
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

	arraySize(arr);
	return 0;
}
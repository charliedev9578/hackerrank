#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;



int getNum(vector<int> arr) {
	int n = (int) arr.size();
	sort(arr.begin() , arr.end());
	int count = 0;
	int tempCount = 0;
	int prevCount = 0;
	int temp = arr[0];
	int round = 0;
	for(int i = 0; i < n; i++) {
		if(temp == arr[i]) {
			tempCount++;
		}
		else {
			if(arr[i] - temp == 1) {
				round++;
				if(round == 2) {
					if(count < tempCount + prevCount) {
						count = tempCount + prevCount;
					}
					round = 1;
				}
				prevCount = tempCount;
			}
			else {
				if(count < prevCount + tempCount) {
					count = prevCount + tempCount;
				}
				prevCount = 0;
				round = 0;
			}
			tempCount = 1;
			temp = arr[i];
		}
	}

	if(count < prevCount + tempCount) {
		count = tempCount + prevCount;
	}

	return count;
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

	cout << getNum(arr) << endl;
	return 0;
}
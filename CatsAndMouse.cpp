#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

void getResult(int v[]);

void getResult(int v[]) {
	if(abs(v[0] - v[2]) == abs(v[1] - v[2])) {
		cout << "Mouse C" << endl;
	}
	else {
		string answer = abs(v[0] - v[2]) < abs(v[1] - v[2]) ? "Cat A" : "Cat B";
		cout << answer << endl;
	}
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	int arr[n][3];

	for(int i = 0; i < n; i++) {
		int temp;
		for(int j = 0; j < 3; j++) {
			cin >> temp;
			arr[i][j] = temp;
		}
	}

	for(int i = 0; i < n; i++ ){
		getResult(arr[i]);
	}
	return 0;
}
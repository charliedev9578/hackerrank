#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;

void draw(int n);

void draw(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		for(int k = 0; k < i + 1; k++) {
			cout << "#";
		}

		cout << endl;
	}
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;

	draw(n);
	return 0;
}
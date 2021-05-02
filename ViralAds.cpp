#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getLikes(int n) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return floor(5 / 2);
	}
	else {
		return (int)floor(getLikes(n-1) * 3 / 2);
	}
}

int getAnswer(int n) {
	int count = 0;

	for(int i = 1; i <= n; i++) {
		count += getLikes(i);
	}

	return count;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	cout << getLikes(n) << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void getResult(vector<int> a , vector<int> b);

void getResult(vector<int> a , vector<int> b) {
	int numAlice = 0;
	int numBob = 0;

	for(int i = 0; i < 3; i++) {
		if(a[i] > b[i]) numAlice++;
		else if(a[i] < b[i]) numBob++;
	}

	cout << numAlice << " " << numBob << endl;
}


int main(int argc, char const *argv[]) {
	vector<int> a;
	vector<int> b;
	int temp;

	for(int i = 0; i < 3; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	for(int i = 0; i < 3; i++) {
		cin >> temp;
		b.push_back(temp);
	}

	getResult(a , b);

	return 0;
}
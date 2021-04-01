#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getFactors(vector<int> a , vector<int> b);

int getFactors(vector<int> a , vector<int> b) {
	sort(a.begin() , a.end());
	sort(b.begin() , b.end());

	int minB = b[0];
	int maxA = a[(int)a.size() - 1];
	int count = 0;
	for(int i = maxA; i <= minB; i++){
		for(int j = 0; j < (int)a.size(); j++)
			if(!(i % a[j] == 0)) goto outer;
		for(int j = 0; j < (int)b.size(); j++)
			if(!(b[j] % i == 0)) goto outer;
		count++;
		outer: continue;
	}
	return count;
}

int main(int argc, char const *argv[]) {
	int n;
	int m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(m);

	int temp;

	for(int i = 0; i < n; i++ ) {
		cin >> temp;
		a[i] = temp;
	}

	for(int i = 0; i < m; i++) {
		cin >> temp;
		b[i] = temp;
	}

	cout << getFactors(a , b) << endl;
	return 0;
}
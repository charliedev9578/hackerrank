#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

void kangaroo(int x1 , int v1 , int x2 , int v2) {
	if(x1 == x2) {
		if(v1 == v2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else {
		if(v1 > v2) {
			if((x2 - x1) % (v1 - v2) == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

int main(int argc, char const *argv[]) {
	int x1;
	int v1;
	int x2;
	int v2;

	cin >> x1 >> v1 >> x2 >> v2;

	kangaroo(x1 , v1 , x2 , v2);
	return 0;
}
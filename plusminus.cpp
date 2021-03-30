#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
using namespace std;

void getFractions(vector<int> arr);

void getFractions(vector<int> arr) {
	int numPos = 0;
	int numNeg = 0;
	int numZero = 0;

	for(int i = 0; i < (int)arr.size(); i++) {
		if(arr[i] > 0) numPos++;
		else if(arr[i] < 0) numNeg++;
		else numZero++;
	}

	double pos = ((double)numPos) / ((double)arr.size());
	double neg = ((double)numNeg) / ((double)arr.size());
	double zero = ((double)numZero) / ((double)arr.size());

	printf("%.6lf\n" , pos);
	printf("%.6lf\n" , neg);
	printf("%.6lf\n" , zero);
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

	getFractions(arr);
	
	return 0;
}
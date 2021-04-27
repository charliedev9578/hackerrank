#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int getArea(vector<int> arr , char* word , int n) {
	int height = 0;
	for(int i = 0; i < n; i++) {
		int temp = (int)(toupper(word[i])) - 65;
		if(height < arr[temp]) {
			height = arr[temp];
			// cout << height << endl;
		}
	}
	return height * n;
}

int main(int argc, char const *argv[]) {
	vector<int> arr(26);
	int temp;
	char* word = new char[10];

	for(int i = 0; i < 26; i++) {
		cin >> temp;
		arr[i] = temp;
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	scanf("%s" , word);

	cout << getArea(arr , word , (int)strlen(word)) << endl;
	return 0;
}
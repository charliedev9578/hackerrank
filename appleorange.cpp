#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

vector<string> split_string(string input_string);
void getCount(const int s , const int t , const int a , const int b , vector<int> apples , vector<int> oranges);

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

void getCount(const int s , const int t , const int a , const int b , vector<int> apples , vector<int> oranges) {
	int numApples = 0;
	int numOranges = 0;

	for (int i = 0; i < (int)apples.size(); i++) {
		if((apples[i] + a >= s) && (apples[i] + a <= t)) numApples++;
	}
	for (int i = 0; i < (int)oranges.size(); i++) {
		if((oranges[i] + b >= s) && (oranges[i] + b <= t)) numOranges++;
	}

	cout << numApples << endl;
	cout << numOranges << endl;
}

int main(int argc, char const *argv[]) {
	string st;
	getline(cin , st);
	vector<string> v_st = split_string(st);

	string ab;
	getline(cin , ab);
	vector<string> v_ab = split_string(ab);

	int s = stoi(v_st[0]);
	int t = stoi(v_st[1]);
	int a = stoi(v_ab[0]);
	int b = stoi(v_ab[1]);

	string mn;
	getline(cin , mn);
	vector<string> v_mn = split_string(mn);

	int m = stoi(v_mn[0]);
	int n = stoi(v_mn[1]);

	string str_apples;
	getline(cin , str_apples);
	vector<string> v_apple = split_string(str_apples);
	vector<int> apples(m);
	for(int i = 0; i < m; i++) {
		apples[i] = stoi(v_apple[i]);
	}

	string str_oranges;
	getline(cin , str_oranges);
	vector<string> v_oranges = split_string(str_oranges);
	vector<int> oranges(n);
	for(int i = 0; i < n; i++) {
		oranges[i] = stoi(v_oranges[i]);
	}

	getCount(s , t , a , b , apples , oranges);
	return 0;
}
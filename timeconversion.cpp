#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

string getTime(string s);


string getTime(string s) {
	if(s.substr(s.length() - 2 , 2).compare("AM") == 0) {
		if(stoi(s.substr(0 , 2)) == 12) {
			// cout << "12AM" << endl;
			string temp = "00";
			return temp.append(s.substr(2 , s.length() - 4));
		}
		else {
			// cout << "AM" << endl;
			return s.substr(0 , s.length() - 2);
		}
	}
	else {
		if(stoi(s.substr(0 , 2)) == 12) {
			// cout << "12PM" << endl;
			return s.substr(0 , s.length() - 2);
		}
		else { 
			// cout << "PM" << endl;
			return to_string(stoi(s.substr(0 , 2)) + 12).append(s.substr(2 , s.length() - 4));
		}
	}
}

int main(int argc, char const *argv[]) {
	string s;
	getline(cin , s);

	cout << getTime(s) << endl;
	
	return 0;
}
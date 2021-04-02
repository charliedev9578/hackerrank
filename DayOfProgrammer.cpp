#include <bits/stdc++.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

void getDay(int year , int days);

void getDay(int year , int days) {
	int numDays = 0;
	int monthCount = 1;
	int rest = 0;
	
	if(year < 1918 && year >= 1700) {
		for(int i = 1; i < 13; i++) {
			if(days > numDays) {
				if((i%2 == 0 && i <=7) || (i%2 != 0 && i > 7)){
					if(i == 2) {
						if((year%4 == 0)) {
							if(days - numDays > 29) {
								numDays += 29;
								monthCount++;
							}
							else {
								rest = days - numDays;
								break;
							}
						}
						else {
							if(days - numDays > 28) {
								numDays += 28;
								monthCount++;
							}
							else {
								rest = days - numDays;
								break;
							}
						}
					}
					else {
						if(days - numDays > 30) {
							numDays += 30;
							monthCount++;
						}
						else {
							rest = days - numDays;
							break;
						}	
					}
				}
				else {
					if(days - numDays > 31) {
						numDays += 31;
						monthCount++;
					}
					else {
						rest = days - numDays;
						break;
					}
				}
			}
			else {
				rest = days - numDays;
				break;
			}
		}
	}
	else if(year > 1918) {
		for(int i = 1; i < 13; i++) {
			if(days > numDays) {
				if((i%2 == 0 && i <=7) || (i%2 != 0 && i > 7)){
					if(i == 2) {
						if((year%400 == 0) || ((year%4 == 0) && (year%100 != 0))) {
							if(days - numDays > 29) {
								numDays += 29;
								monthCount++;
							}
							else {
								rest = days - numDays;
								break;
							}
						}
						else {
							if(days - numDays > 28) {
								numDays += 28;
								monthCount++;
							}
							else {
								rest = days - numDays;
								break;
							}
						}
					}
					else {
						if(days - numDays > 30) {
							numDays += 30;
							monthCount++;
						}
						else {
							rest = days - numDays;
							break;
						}	
					}
				}
				else {
					if(days - numDays > 31) {
						numDays += 31;
						monthCount++;
					}
					else {
						rest = days - numDays;
						break;
					}
				}
			}
			else {
				rest = days - numDays;
				break;
			}
		}
	}
	else if(year == 1918) {
		int febDays = 15;

		for(int i = 1; i < 13; i++) {
			if(days > numDays) {
				if((i%2 == 0 && i <=7) || (i%2 != 0 && i > 7)){
					if(i == 2) {
						if(days - numDays > 15) {
							numDays += febDays;
							monthCount++;
						}
						else {
							rest = 28 + 1 - febDays;
							break;
						}
					}
					else {
						if(days - numDays > 30) {
							numDays += 30;
							monthCount++;
						}
						else {
							rest = days - numDays;
							break;
						}	
					}
				}
				else {
					if(days - numDays > 31) {
						numDays += 31;
						monthCount++;
					}
					else {
						rest = days - numDays;
						break;
					}
				}
			}
			else {
				rest = days - numDays;
				break;
			}
		}
	}

	string monthNum;
    string dateNum;

    if(rest < 10) {
        dateNum = "0" + to_string(rest);
    }
    else {
        dateNum = to_string(rest);
    }

    if(monthCount < 10) {
        monthNum = "0" + to_string(monthCount);
    }
    else {
        monthNum = to_string(monthCount);
    }

    string yearStr = dateNum + "." + monthNum + "." + to_string(year);
    cout << yearStr << endl;
}

int main(int argc, char const *argv[]) {
	int year;
	cin >> year;
	int days = 256;
	getDay(year , days);
	return 0;
}
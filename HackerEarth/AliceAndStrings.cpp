#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  03-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Alice and Strings]
*/


int main() {
	string a, b;
	int len, i, max = 0, temp;

	cin >> a >> b;
	len = a.size();
	max = b[0] - a[0];
	for(i=1; i<len; i++) {
		temp = b[i] - a[i];
		if(temp > max) {
			max = 0;
			break;
		}
	}

	if(max) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}

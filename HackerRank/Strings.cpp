#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  02-04-2022
    Language: C++
    OJ: HackerRank
    Problem: [Strings]
*/

int main()
{
    string first, second, result;
    char ch;

    cin >> first >> second;
    cout << first.size() << " " << second.size() << endl;

    result = first + second;
    cout << result << endl;

    ch = first[0];
    first[0] = second[0];
    second[0] = ch;
    cout << first << " " << second << endl;

    return 0;
}

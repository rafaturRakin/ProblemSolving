#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  03-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Terrible Chandu]
*/

int main()
{
    int test, i, len;

    string str;
    cin >> test;
    cin.ignore();

    while(test--)
    {
        cin >> str;
        len = str.size() - 1;
        for(i=len; i>=0; i--)
            cout << str[i];
        cout << endl;
    }
}

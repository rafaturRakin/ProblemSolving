#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  29-03-2022
    Language: C++
    OJ: HackerRank
    Problem: [Basic Data Types]
*/

int main()
{
    int intValue;
    long long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    cout << intValue << endl;
    cout << longValue << endl;
    cout << charValue << endl;
    cout << setprecision(3) << fixed << floatValue << endl;
    cout << setprecision(9) << fixed << doubleValue << endl;

    return 0;
}

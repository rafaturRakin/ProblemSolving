#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Find Product]
*/

int main()
{
    long int product=1, number, x, modulo = (1e9+7);
    cin >> number;

    while(number--)
    {
        cin >> x;
        product = (product * x) % modulo;
    }
    cout << product << endl;

    return 0;
}

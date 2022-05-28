#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Jiya's Sequence]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, length, number, digit;
    long long int product;

    cin >> test;

    while(test--)
    {
        cin >> length;
        product = 1LL;

        while(length--)
        {
            cin >> number;
            product *= number;
        }

        digit = product % 10;

        if(digit==2 || digit==3 || digit==5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}


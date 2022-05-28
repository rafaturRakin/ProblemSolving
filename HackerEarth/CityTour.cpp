#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [City Tour]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test;
    long long steps;

    cin >> test;

    while(test--)
    {
        cin >> steps;

        cout << steps * 4 << endl;
    }

    return 0;
}


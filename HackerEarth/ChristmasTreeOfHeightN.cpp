#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Christmas tree of height N]
*/

long long arr[40][40];

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void pascalTriangle()
{
    arr[0][0] = arr[1][0] = arr[1][1] = 1LL;

    for(int i=2; i<40; i++)
    {
        arr[i][0] = arr[i][i] = 1LL;
        for(int j=1; j<i; j++)
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
    }
}

int main()
{
    fastIO();

    int test, number;

    pascalTriangle();

    cin >> test;

    while(test--)
    {
        cin >> number;

        for(int i=0; i<number; i++)
        {
            for(int j=0; j<=i; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}


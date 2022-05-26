#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Sums of i-th row and i-th column]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, n, m;

    cin >> test;

    while(test--)
    {
        cin >> n >> m;

        int arr[n][m];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin >> arr[i][j];
        }

        int minimum = min(n, m);
        int row[minimum]={0}, column[minimum]={0};

        for(int i=0; i<minimum; i++)
        {
            for(int j=0; j<m; j++)
            {
                row[i] += arr[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<minimum; j++)
            {
                column[j] += arr[i][j];
            }
        }

        bool isTrue = false;
        for(int i=0; i<minimum; i++)
        {
            if(row[i]==column[i])
            {
                isTrue = true;
                break;
            }
        }

        if(isTrue)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}


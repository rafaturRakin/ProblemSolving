#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Roy and Symmetric Logos]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, n;
    bool isTrue = true;

    cin >> test;

    while(test--)
    {
        cin >> n;

        char arr[n][n];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin >> arr[i][j];
        }

        for(int i=0; i<=(n-1)/2; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]!=arr[n-1-i][j])
                {
                    isTrue = false;
                    break;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            if(!isTrue)
                break;

            for(int j=0; j<=(n-1)/2; j++)
            {
                if(arr[i][j]!=arr[i][n-j-1])
                {
                    isTrue = false;
                    break;
                }
            }
        }

        if(isTrue)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        isTrue = true;
    }

    return 0;
}


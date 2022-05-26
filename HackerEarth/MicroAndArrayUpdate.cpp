#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Micro and Array Update]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, n, k, minimumNumber;

    cin >> test;

    while(test--)
    {
        cin >> n >> k;

        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        minimumNumber = arr[0];

        for(int i=1; i<n; i++)
        {
            if(arr[i] < minimumNumber)
                minimumNumber = arr[i];
        }

        if(minimumNumber >= k)
            cout << 0 << endl;
        else
            cout << k - minimumNumber << endl;
    }

    return 0;
}

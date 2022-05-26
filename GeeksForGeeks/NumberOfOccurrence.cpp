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

    int test, num, x, result;

    cin >> test;

    while(test--)
    {
        cin >> num >> x;

        int arr[num];

        for(int i=0; i<num; i++)
            cin >> arr[i];

        result = 0;
        for(int i=0; i<num; i++)
        {
            if(arr[i]==x)
                ++result;
        }

        cout << result << endl;
    }
    return 0;
}


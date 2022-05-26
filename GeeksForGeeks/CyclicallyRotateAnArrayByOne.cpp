#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Cyclically rotate an array by one]
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
        cin >> num;

        int arr[num];

        for(int i=0; i<num; i++)
            cin >> arr[i];

        int temp = arr[num-1];
        for(int i=num-1; i>0; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[0] = temp;

        for(int i=0; i<num; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}



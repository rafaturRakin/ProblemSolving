#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  26-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Arrays]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, num;

    cin >> test;

    while(test--)
    {
        cin >> num;

        int arr[num];

        for(int i=0; i<num; i++)
            cin >> arr[i];

        int temp;
        for(int i=0, j=num-1; i<=j; i++, j--)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        for(int i=0; i<num; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  12-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Reverse squared sum]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int test, length, array[100], temp;

    cin >> test;

    while(test--)
    {
        cin >> length;
        for(int i=0; i<length; i++)
            cin >> array[i];

        for(int i=0, j=length-1; i<j; i++, j--)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

        for(int i=0; i<length; i++)
            cout << array[i] << " ";
        cout << endl;
    }

    return 0;
}

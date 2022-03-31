#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: HackerRank
    Problem: [Printing Pattern Using Loops]
*/

int main()
{
    static int arr[2000][2000];
    int number, range, value;
    cin >> number;

    value = number;
    range = 2*number-1;
    for(int i=0; i<number; i++)
    {
        for(int j=i; j<range-i; j++)
        {
            arr[i][j] = value;
            arr[j][i] = value;
            arr[range-1-i][j] = value;
            arr[j][range-1-i] = value;
        }
        --value;
    }

    for(int i=0; i<range; i++)
    {
        for(int j=0; j<range; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}

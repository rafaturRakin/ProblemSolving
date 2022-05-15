/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 25A
    Date : 09-11-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int number, x, i, even=0, odd=0, lastOdd=0, lastEven=0;

    cin >> number;

    for(i=1; i<=number; i++)
    {
        cin >> x;
        if(x%2==0)
        {
            ++even;
            lastEven = i;
        }
        else
        {
            ++odd;
            lastOdd = i;
        }

    }

    if(even==1)
        cout << lastEven << endl;
    else
        cout << lastOdd << endl;
    return 0;
}


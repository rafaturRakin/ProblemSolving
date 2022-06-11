/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 617A
    Date : 01-11-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    long int x, result;
    cin >> x;

    result = x / 5;

    if(x%5==0)
        cout << result << "\n";
    else
        cout << result+1 << "\n";

    return 0;
}


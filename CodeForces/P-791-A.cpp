/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 791A
    Date : 29-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;

    i = 1;
    while(1)
    {
        a *= 3;
        b *= 2;
        if(a>b)
            break;
        ++i;
    }

    cout << i << endl;
    return 0;
}


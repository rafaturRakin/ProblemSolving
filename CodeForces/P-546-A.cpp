/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 546A
    Date : 28-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    long long int k, n, w, i, x = 0, total = 0;

    cin >> k >> n >> w;

    for(i=1; i<=w; i++)
        x+= i * k;

    total = x - n;

    if(total>0)
        cout << total << "\n";
    else
        cout << "0\n";

    return 0;
}



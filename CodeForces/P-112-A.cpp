/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 112A
    Date : 26-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    int x;
    x = stricmp(a.c_str(),b.c_str());

    if(x>0)
        cout << 1 << '\n';
    else if(x<0)
        cout << -1 << '\n';
    else
        cout << x << "\n";
    return 0;
}


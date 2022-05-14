/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 4A
    Date : 24-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int weight;
    cin >> weight;
    if(weight%2 == 0 && weight>=4)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

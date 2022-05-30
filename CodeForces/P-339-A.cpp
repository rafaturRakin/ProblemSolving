/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 339A
    Date : 26-10-2020
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int one=0, two=0, three=0, i;
    cin >> line;

    for(i=0; i<line.size(); i+=2)
    {
        if(line[i] == '1')
            ++one;
        else if(line[i] == '2')
            ++two;
        else
            ++three;
    }

    for(i=one*2 - 2; i>=0; i-=2)
        line[i] = '1';

    for(i=(one+two)*2 - 2; i>=one*2; i-=2)
        line[i] = '2';

    for(i=line.size() - 1; i>=(one+two)*2; i-=2)
        line[i] = '3';

    cout << line << "\n";

    return 0;
}

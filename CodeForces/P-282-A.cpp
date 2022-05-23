/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 282A
    Date : 25-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number, vlaue, i, result = 0;
    string operation;
    cin >> number;

    for(i=0; i<number; i++)
    {
        cin >> operation;
        if(operation[0]=='+')
            ++result;
        else if(operation[2]=='+')
            result++;
        else if(operation[0]=='-')
            --result;
        else
            result--;
    }
    cout << result << "\n";
    return 0;
}

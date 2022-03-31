#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: CodeForces
    Problem: [A. Pasha and Stick]
*/

int main()
{
    int number;
    cin >> number;
    if(number%2==0)
    {
        number = number/2;
        if(number%2==0)
            cout << number/2-1 << endl;
        else
            cout << number/2 << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}

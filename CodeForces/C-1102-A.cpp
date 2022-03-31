#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: CodeForces
    Problem: [A. Integer Sequence Dividing]
*/

int main()
{
    long long int number, sum;
    cin >> number;
    sum = number * (number+1) / 2;
    cout << (sum&1) << endl;
    return 0;
}

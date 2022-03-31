#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: CodeChef
    Problem: [Sum of Digits]
*/

int main()
{
    int test, number, digitSum;

    cin >> test;
    while(test--)
    {
        cin >> number;
        digitSum = 0;
        while(number)
        {
            digitSum += number%10;
            number /= 10;
        }
        cout << digitSum << endl;
    }
    return 0;
}

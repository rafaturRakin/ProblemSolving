#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: CodeChef
    Problem: [Reverse The Number]
*/

int main()
{
    int test, number, reverseNumber;

    cin >> test;
    while(test--)
    {
        cin >> number;
        reverseNumber = 0;

        while(number)
        {
            reverseNumber = reverseNumber*10 + number%10;
            number /= 10;
        }
        cout << reverseNumber << endl;
    }
}

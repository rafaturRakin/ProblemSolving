#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  31-03-2022
    Language: C++
    OJ: HackerRank
    Problem: [FizzBuzz]
*/

int main()
{
    int i=0;
    while(i++<100)
    {
        if(i%15==0)
            cout << "FizzBuzz";
        else if(i%3==0)
            cout << "Fizz";
        else if(i%5==0)
            cout << "Buzz";
        else
            cout << i;
        cout << "\n";
    }
    return 0;
}

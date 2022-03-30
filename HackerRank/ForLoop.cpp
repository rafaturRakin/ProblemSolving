#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  30-03-2022
    Language: C++
    OJ: HackerRank
    Problem: [For Loop]
*/

int main()
{
    int a, b;
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;

    for(int i=a; i<=b; i++)
    {
        if(i<=9)
            cout << words[i] << endl;
        else if(i%2)
            cout << "odd\n";
        else
            cout << "even\n";
    }

    return 0;
}

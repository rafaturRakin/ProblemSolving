/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 266A
    Date : 27-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    string word;
    int number, i, count=0;
    cin >> number >> word;

    for(i=0; i<number; i++)
    {
        if(word[i]==word[i+1])
            ++count;
    }

    cout << count << '\n';
    return 0;
}


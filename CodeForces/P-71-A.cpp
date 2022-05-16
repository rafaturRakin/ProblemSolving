/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 71A
    Date : 24-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    int length, test;
    cin >> test;
    while(test>0)
    {
        fflush(stdin);
        cin >> word;
        length = word.size();

        if(length<=10)
            cout << word << "\n";
        else
            cout << word[0] << length - 2 << word[length-1] << "\n";
        --test;
    }
    return 0;
}


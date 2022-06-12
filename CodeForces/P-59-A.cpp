/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 59A
    Date : 02-11-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int upper=0, lower=0, i;
    string word;
    cin >> word;

    for(i=0; i<word.size(); i++)
    {
        if(word[i]>='A' && word[i]<='Z')
            ++upper;
        else
            ++lower;
    }

    if(upper>lower)
    {
        for(i=0; i<word.size(); i++)
            word[i] = toupper(word[i]);
    }
    else
    {
        for(i=0; i<word.size(); i++)
            word[i] = tolower(word[i]);
    }

    cout << word << endl;
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  08-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Harry and String]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}

bool goodString(string str)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i+1]!='\0' && str[i+1]<str[i])
            return false;
        ++i;
    }
    return true;
}

bool worstString(string str)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i+1]!='\0' && str[i+1]>str[i])
            return false;
        ++i;
    }
    return true;
}

int main()
{
    fastIO();
    int test, length;
    string input, vowels;

    cin >> test;

    while(test--)
    {
        cin >> input;
        length = input.size();
        vowels = "";

        for(int i=0; i<length; i++)
        {
            if(isVowel(input[i]))
                vowels.push_back(input[i]);
        }
        vowels.push_back('\0');

        if(goodString(vowels))
            cout << "Good\n";
        else if(worstString(vowels))
            cout << "Worst\n";
        else
            cout << "Bad\n";
    }

    return 0;
}

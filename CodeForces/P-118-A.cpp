/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 118A
    Date : 25-10-2020
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word, changedWord;
    char ch;
    int i, length, j;

    cin>> word;

    length = word.size();
    for(i=0; i<length; i++)
    {
        ch = tolower(word[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        {
            word.erase(i,1);
            --i;
        }
        else
            word[i] = ch;
    }
    changedWord = word+word;

    for(i=0, j=0; i<word.size()*2; i+=2, ++j)
    {
        changedWord[i] = '.';
        changedWord[i+1] = word[j];

    }

    cout<<changedWord<< '\n';

    return 0;
}


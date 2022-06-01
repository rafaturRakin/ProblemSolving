/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 236A
    Date : 28-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    int value, sum[26]={0}, i, check=0;
    string name;

        cin >> name;

        for(i=0; i<name.size(); i++)
        {
            value = (int) name[i] - 'a';
            ++sum[value];
        }

        for(i=0; i<26; i++)
        {
            if(sum[i]>1)
                check+=1;
            else
                check += sum[i];
        }

        if(check % 2 == 0)
            cout << "CHAT WITH HER!\n";
        else
            cout << "IGNORE HIM!\n";

    return 0;
}


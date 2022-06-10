/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 96A
    Date : 27-10-2020
*/

#include<bits/stdc++.h>
#define length 100

using namespace std;
int main()
{
    string word, team1, team2;
    int position;

    team1 = "0000000";
    team2 = "1111111";
    cin  >> word;

    if(word.find(team1) != string::npos)
        cout << "YES\n";
    else if(word.find(team2) != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}


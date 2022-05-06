#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  04-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Password]
*/

int main()
{
    int num, i, j;
    cin >> num;
    cin.ignore();

    string inp[num];
    for(i=0; i<num; i++)
        cin >> inp[i];

    for(i=0; i<num-1; i++)
    {
        string temp = inp[i];
        reverse(temp.begin(), temp.end());

        for(j=0; j<num; j++)
        {
            if(temp==inp[j])
            {
                cout << inp[j].size() << ' ' << temp[inp[j].size()/2] << endl;
                break;
            }
        }

        if(j != num)
            break;
    }

    return 0;
}

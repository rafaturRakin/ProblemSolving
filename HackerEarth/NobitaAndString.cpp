#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  04-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Nobita and String]
*/

int main()
{
    int test, i, len;
    string inp, out;

    cin >> test;
    cin.ignore();

    while(test--)
    {
        getline(cin, inp);
        len = inp.size();

        for(i=len-1; i>=0; i--)
        {
            if(inp[i]==' ')
            {
                for(int j=out.size()-1; j>=0; j--)
                    cout << out[j];
                out.clear();
                cout << " ";
            }
            else
                out.push_back(inp[i]);
        }

        for(int j=out.size()-1; j>=0; j--)
            cout << out[j];
        cout << endl;
        out.clear();
    }

    return 0;
}

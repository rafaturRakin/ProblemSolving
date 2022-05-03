#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  03-05-2022
    Language: C++
    OJ: HackerRank
    Problem: [Largest Balanced String]
*/

int main()
{
    int test, i, len;
    string inp;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        int arr[6]= {0};
        cin >> inp;
        len = inp.size();

        for(i=0; i<len; i++)
        {
            if(inp[i]=='(')
                ++arr[0];
            else if(inp[i]==')')
                ++arr[1];
            else if(inp[i]=='{')
                ++arr[2];
            else if(inp[i]=='}')
                ++arr[3];
            else if(inp[i]=='[')
                ++arr[4];
            else
                ++arr[5];
        }

        len = 0;

        for(i=0; i<6; i+=2)
        {
            if(arr[i]==arr[i+1])
                len += arr[i]*2;
            else if(arr[i] < arr[i+1])
                len += arr[i]*2;
            else
                len += arr[i+1]*2;
        }
        cout << len << endl;
    }
    return 0;
}

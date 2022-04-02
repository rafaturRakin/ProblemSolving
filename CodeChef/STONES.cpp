#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  02-04-2022
    Language: C++
    OJ: CodeChef
    Problem: [Jewels and Stones]
*/

int main()
{
    int test, result;
    string jewel, stone;
    cin >> test;

    while(test--)
    {
        cin >> jewel >> stone;
        result = 0;
        for(int i=0; i<stone.size(); i++)
        {
            for(int j=0; j<jewel.size(); j++)
            {
                if(stone[i]==jewel[j])
                {
                    ++result;
                    break;
                }
            }
        }
        cout << result << endl;
    }
}

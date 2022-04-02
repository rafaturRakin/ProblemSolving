#include<bits/stdc++.h>
using namespace std;

/*
    Author: Rakin
    Date:  01-04-2022
    Language: C++
    OJ: LeetCode
    Problem: [Goal Parser Interpretation]
*/

string goalParser(string input)
{
    string output="";
    for(int i=0; i<input.size(); )
    {
        if(input[i]=='G')
        {
            output.push_back('G');
            i++;
        }
        else if(input[i]=='(' && input[i+1]==')')
        {
            output.push_back('o');
            i+=2;
        }
        else if(input[i]=='(' && input[i+1]=='a')
        {
            output.push_back('a');
            output.push_back('l');
            i+=4;
        }
    }
    return output;
}

int main()
{
    string input;
    cin >> input;

    cout << goalParser(input) << endl;

    return 0;
}

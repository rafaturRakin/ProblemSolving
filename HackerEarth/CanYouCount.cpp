#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  11-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Can you count?]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int isVowel(char ch)
{
    if(ch=='a')
        return 0;
    else if(ch=='e')
        return 1;
    else if(ch=='i')
        return 2;
    else if(ch=='o')
        return 3;
    else if(ch=='u')
        return 4;
    else
        return -1;
}

int main()
{
    fastIO();
    int test, length, index, vowels;
    string input;
    unsigned long long int result;
    bool ch[5];

    cin >> test;

    while(test--)
    {
        cin >> input;
        length = input.size();

        for(int i=0; i<5; i++)
            ch[i] = true;

        vowels = 0;
        result = 1;

        for(int i=0; i<length; i++)
        {
            index = isVowel(input[i]);
            if(index>=0 && ch[index])
            {
                ++vowels;
                ch[index] = false;
            }

            if(input[i]=='_')
                result = result * vowels;
        }
        cout << result << "\n";
    }
    return 0;
}

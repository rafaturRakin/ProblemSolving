#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  19-05-2022
    Language: C++
    OJ: GeekForGeeks
    Problem: [Palindrome String]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int isPalindrome(string input)
{
    int length = input.size();

    for(int i=0, j=length-1; i<=j; i++, j--)
    {
        if(input[i] != input[j])
            return 0;
    }
    return 1;
}

int main()
{
    fastIO();

    int test;
    string input;

    cin >> test;

    while(test--)
    {
        cin >> input;
        cout << isPalindrome(input) << "\n";
    }

    return 0;
}

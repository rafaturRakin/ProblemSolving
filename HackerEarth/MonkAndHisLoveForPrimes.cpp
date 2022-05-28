#include<bits/stdc++.h>

using namespace std;

/*
    Author: Rakin
    Date:  28-05-2022
    Language: C++
    OJ: HackerEarth
    Problem: [Monk and his love for Primes]
*/

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int isPrime(int number)
{
    int root = sqrt(number);
    for(int i=2; i<=root+1; i++)
    {
        if(number%i==0)
            return 0;
    }

    return 1;
}


int main()
{
    fastIO();

    int result, length;
    string input;
    cin >> input;

    length = input.size();
    result = 0;

    for(int i=0; i<length; i++)
    {
        if(input[i]>='a' && input[i]<='z')
            result += (input[i]-32);
        else if(input[i]>='A' && input[i]<='Z')
            result -= (input[i]+32);
    }

    if(result<0)
        result = -1 * result;

    result = isPrime(result);
    cout << result << endl;

    return 0;
}


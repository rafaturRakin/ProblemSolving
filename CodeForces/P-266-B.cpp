/**
    Name : Shah Rafatur Rahman Rakin
    Dept. of CSE, HSTU, 2018

    OJ : Code Forces
    Problem : 266B
    Date : 01-11-2020
*/

#include<bits/stdc++.h>
#define length 105

using namespace std;
int main()
{
    int number, time, i, x=-1, j;
    string sequence;

    cin >> number >> time;
    cin >> sequence;

    for(i=0; i<time; i++)
    {
        for(j=0; j<sequence.size()-1; )
        {
            if(sequence[j]=='B' && sequence[j+1]=='G')
            {
                sequence[j] = 'G';
                sequence[j+1] = 'B';
                j+= 2;
            }
            else
                j++;
        }
    }

    cout << sequence << endl;
    return 0;
}


/*
Friends Pairing problem*/

#include<bits/stdc++.h>
using namespace std;

int countfriendsPair( int n)
{
    //if(frnds[n]!=-1)
    //    return frnds[n];
    int frnds[n+1];
    for(int i = 0; i <= n; i++)
    {
        if(i > 2)
            frnds[i] = frnds[i-1]+ (i-1) * frnds[i-2];
        else
            frnds[i] = i;
    }

    return frnds[n];

}

int main()
{
    int n = 5;
    cout << countfriendsPair( n);
}

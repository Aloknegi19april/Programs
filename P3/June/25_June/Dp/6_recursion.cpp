/*
Friends Pairing problem*/

#include<bits/stdc++.h>
using namespace std;
int frnds[4] =  {1, 1, 2, 4};
int countfriendsPair( int n)
{
    //if(frnds[n]!=-1)
    //    return frnds[n];
    if(n > 2)
        return frnds[n] = countfriendsPair( n-1) + (n-1) * countfriendsPair(n-2);
    else
        return frnds[n] = n;
}

int main()
{
    int n = 4;

    //memset(frnds, -1, sizeof(frnds));

    cout << countfriendsPair( n);
}

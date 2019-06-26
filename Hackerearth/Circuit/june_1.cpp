#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //String
    char S[n];
    for(int i = 0; i < n; i++)
        cin >> S[i];
    //Second String
    char T[n];
    for(int i = 0; i < n; i++)
        cin >> T[i];

    int count = 0, j = 0;
    for(int i = 0 ; i < n; i++)
    {
        while(j < n )
        {
            if(S[i] == T[j])
            {
                count++;
                j++;
                break;
            }
            else
            {
                j = -1;
                count = 0;
                j++;
                break;
            }

        }

    }
    cout << n-count ;
}


//10
//abcxbcabcd
//abcdabcaaa

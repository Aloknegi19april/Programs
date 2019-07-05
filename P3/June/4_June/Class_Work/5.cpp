/*
Question : Print only prime factors of a Number
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int limit = sqrt(n);

    for(int i = 2; i <= limit; i++)
    {
        if(n % i == 0)
        {
            int c=0;
            int limit1 = sqrt(i);
            for(int j = 2; j<=limit1; j++)
            {
                if(i % j == 0)
                {
                    c++;
                }
            }
            if(c==0)
            {
                cout << i <<" \n";            }
        }

    }
}

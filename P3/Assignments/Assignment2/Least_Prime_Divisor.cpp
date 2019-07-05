#include<bits/stdc++.h>
using namespace std;

void myfunc()
{
    //author    :   Alok Negi
    //date      :   2-July
    //approach  :   Sieve of Eratosthenes
    return; 
}

int least_Prime_Divisor(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime) );

    for(int i = 2; i*i <= n; i++)
        if(prime[i]==true)
            for(int j = i*i; j < n; j+=i)
                if(j%i==0)
                    prime[j] = false;

    for(int i = 2; i <= n; i++)
        if(n%i==0)
            return i;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    myfunc();
    while(test_cases--)
    {
        int n;
        cin >> n;
        cout << least_Prime_Divisor(n) << endl;
    }
}

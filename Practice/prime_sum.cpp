#include<bits/stdc++.h>
using namespace std;
int prime(int);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int sum=2, c,d,count=0;
    for( int i = 3; i < n/2, sum<n; i+=2 )
    {
        c=prime(i);
        if(c==1)
        {
            sum+=i;
            if(sum>n)
            {
                sum-=i;
                break;
            }
            d=prime(sum);
            if(d==1)
            {
                count++;
            }
        }
    }
    std::cout << count << '\n';
}
//func to find prime
int prime(int n)
{
    int a, count=0;

    if (n ==3) {
        a = 1;
        /* code */
    }
        for(int i =2; i <= sqrt(n); i++)
        {
            if(n%i==0)
            {
                count++;
            }
            if(count>0)
            {
                a = 0;
            }
        }
        if(count==0)
        {
            a = 1;
        }
        return a;
}

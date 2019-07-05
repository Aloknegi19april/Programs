#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int flag = 0;
        long long  int n;
        int t = 0;
        cin >> n;
        while(n!=1)
        {
            if(n%5==0)
            {
                n=4*n/5;
                flag++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                flag++;
            }
            else if(n%2==0)
            {
                n=n/2;
                flag++;
            }
            else
            {
                cout << "-1"<<"\n";
                t = 1;
                break;
            }
        }
        if(t==0)
        cout<<flag<<"\n";

    }
}

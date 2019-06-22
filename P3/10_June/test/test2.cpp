#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        int limit=  sqrt(n);
        for(int i = 2; i <= limit; i++ )
        {
            if(n%i==0)
            {

                flag = 1;
                break;
            }
        }
        if(flag ==0)
        cout << "Yes"<<"\n";
        else
        cout <<"No"<<"\n";
    }
}

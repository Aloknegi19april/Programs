#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='A')
            {
                count++;
            }
        }

        int a = (n - count);
        float tp = (float)a*(float)(10/9);

        cout << "tp" << tp<<"\n";
        if(tp < 7.5)
        {
            count = 0;
            for(int  i = 2; i < n-3; i++)
            {
                if(s[i-2]=='P'||s[i-1]=='P'||s[i+1]=='P'||s[i+2]=='P')
                {
                    count++;
                }

                if(tp+count>=7.5)
                {
                    cout <<"Count: "<< count<<"\n";
                    break;
                }
            }
        }
        else
        {
            cout << "0" <<"\n";
        }

    }
}

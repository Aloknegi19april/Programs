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

        float a = (n - count);
        float tp = a /9;


        if(tp < 0.75)
        {
            count = 0;
            for(int  i = 2; i <= n-3; i++)
            {
                if((s[i-2]=='P'||s[i-1]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
                {
                    count++;
                }

                if(tp+count>=0.75)
                {
                    cout << count<<"\n";
                    break;
                }
            }
            if(count+tp<0.75)
            {
                cout << "-1";
            }
        }
        else
        {
            cout << "0" <<"\n";
        }

    }
}

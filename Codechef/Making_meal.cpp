#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--) {
        /* code */
        int i,Ar[6]={0},j,N,min=999999;
        string ch;
        cin>>N;
        for(i = 0; i < N; i++ )
        {
            cin>>ch;
            for( j = 0; j < ch.length(); j++ )
            {
                if(ch[j]=='c')
                {
                    Ar[0]++;
                }
                if(ch[j]=='o')
                {
                    Ar[1]++;
                }
                if(ch[j]=='d')
                {
                    Ar[2]++;
                }
                if(ch[j]=='e')
                {
                    Ar[3]++;
                }
                if(ch[j]=='h')
                {
                    Ar[4]++;
                }
                if(ch[j]=='f')
                {
                    Ar[5]++;
                }
            }
        }
        Ar[0]=Ar[0]/2;
        Ar[3]=Ar[3]/2;
        
        for(i = 0; i < 6; i++ )
        {
            if(min>Ar[i])
            {
                min=Ar[i];
            }
        }
        cout<<min<<"\n";
    }
}

/* Digit from 1 to 9 (not repeated) and multiple of 7*/

#include<bits/stdc++.h>
using namespace std;

void gString(char *s, int start,int end)
{
    if(start==end)
    {
        s[start]='\0';
        int count[end]={0};
        for(int i = 0; i < end; i ++)
        {

            count[s[i]-'0']++;
            if(count[i]>1)
            {
                cout << "xyz " << endl;
                return;
            }

        }
        if(atoi(s)%7==0)
        {
            cout << "Abc"<<endl;
            cout << s << endl;
            return;
        }
    }

    for(int i = 1; i < 10; i++)
    {
        s[start] = '0' + i;
        gString(s,start+1,end);
    }
    std::cout  << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    char s[k+1];
    gString(s,0,k);
}

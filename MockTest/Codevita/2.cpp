#include<bits/stdc++.h>
using namespace std;
char* left_rotate(char *s, char d, int m)
{
    int l = strlen(s);
    string temp;
    for(int i = 0; i < m; i++)
    {
        temp[i]=s[i];
    }
    for(int i = 0; i < l-m; i++)
    {
        s[i] = s[i+m];
    }
    int j = 0;
    for(int i = l-m; i < l; i++)
    {
        s[i] = temp[j];
        j++;
    }
    return s;
}
char* right_rotate(char *s, char d, int m)
{
    int l = strlen(s);
    string temp;
    int j = 0;
    for(int i = l-m; i < l; i++)
    {
        temp[j]=s[i];
        j++;
    }
    for(int i = l-1; i >= 0; i--)
    {
        s[i] = s[i-m];
    }
    j = 0;
    for(int i = 0; i < m; i++)
    {
        s[i] = temp[j];
        j++;
    }
    return s;
}

int main()
{
    char s[30];
    cin >> s;
    int q;
    cin >> q;
    char dir[q];
    int mag[q];
    for(int i = 0; i < q; i++)
    {
        cin >> dir[i];
        cin >> mag[i];
    }
    string b;
    for(int i = 0; i < q; i++)
    {
        if(dir[i]=='L')
        {
            left_rotate(s,dir[i],mag[i]);
            b+=s[0];
        }
        if(dir[i]=='R')
        {
            right_rotate(s,dir[i],mag[i]);
            b+=s[0];
        }
    }
    cout << b;

}

#include<bits/stdc++.h>
using namespace std;

void reverse(char *s,int start,int last)
{
    if(last <= start)
        return ;
    char temp;
    temp = s[start];
    s[start] = s[last];
    s[last] = temp;

    return reverse(s,start+1,last-1);
}

int main()
{
    char n[10];
    cin >> n ;
    int start = 0, last = strlen(n)-1;
    reverse(n,start,last);
    std::cout <<n << '\n';
}

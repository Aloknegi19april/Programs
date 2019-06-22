/*
Palindrome
*/

#include<bits/stdc++.h>
using namespace std;
int reverse(char *Ar , int start, int last)
{
    if( last <= start)
        return 1;
    if(Ar[start]==Ar[last])
    {
        return reverse(Ar, start+1,last-1);
    }
    else
        return 0;
}

int main()
{
    char s[10];
    cin >> s;
    int l = strlen(s)-1;
    int start = 0;
    int c = reverse(s,start,l);
    if(c == 0)
        std::cout << "Not Palindrome" << '\n';
    else
        std::cout << "Palindrome" << '\n';
}

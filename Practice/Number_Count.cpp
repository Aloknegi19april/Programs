#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c[10]={0};
    char ch[1000];
    int i;
    cin>>ch;
    for (size_t i = 0; i < strlen(ch); i++) {
        /* code */
        if(ch[i]-48<=9)
        {
            c[ch[i]-48]++;
        }
    }
    for (size_t i = 0; i< 10; i++) {
    /* code */
    std::cout << c[i] << ' ';
    }
}

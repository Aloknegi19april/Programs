#include<bits/stdc++.h>
using namespace std;

void permute(char *str, int start, int end)
{
    if(start == end)
    {
        cout << str << endl;
        return ;
    }

    for(int i = start; i <= end; i++)
    {
        if(str[start]!=str[i])
        {
            swap(str[start],str[i]);
            permute(str, start+1, end);
        }
    }
}

int main()
{
    char str[] = "aabc";
    int len = strlen(str);
    permute(str, 0 , len);
}

/* PowerSet */

#include<bits/stdc++.h>
using namespace std;
#define MAX 200
void append(char *outStr, char a)
{
    int len = strlen(outStr);
    outStr[len]=a;
}

void PowerSet(char *str , int pos, int len, char *outStr)
{
    if(pos == len)
    {
        cout << outStr<<" " << endl;
        return;
    }
    PowerSet(str, pos+1,len,outStr);
    append(outStr,str[pos]);
    cout << outStr<<"\n";
    PowerSet(str, pos+1, len, outStr);
}

int main()
{
    char str[] = "abc";
    int len = strlen(str);
    char outStr[MAX]="";
    PowerSet(str, 0, len, outStr);
}

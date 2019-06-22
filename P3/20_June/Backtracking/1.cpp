/*
permutation of string */

#include<bits/stdc++.h>
using namespace std;

void permute(char *a, int l, int r)
{
    int i;
    if(l==r)
    {
        cout << a << endl;
        return;
    }

    for(int i = l; i <= r; i++)
    {

        cout << "a[l]" << a[l]<<" "<<"a[i]"<<a[i]<<"\n";
        swap(a[l],a[i]);
        cout << "a[l1]" << a[l]<<" "<<"a[i1]"<<a[i]<<"\n";
        permute(a,l+1,r);
        cout << "a[l2]" << a[l]<<" "<<"a[i2]"<<a[i]<<"\n";
        swap(a[l],a[i]);
        cout << "a[l3]" << a[l]<<" "<<"a[i3]"<<a[i]<<"\n";
    }
}

int main()
{
    char str[]="ab";
    int len = strlen(str);
    permute(str, 0 , len);
}

/*
Subset sum Problem */

#include<bits/stdc++.h>
using namespace std;

bool Subset_Sum(int Ar[], int n, int gSum)
{
    if(n <= 0)
        return 0;
    if(gSum == 0)
        return 1;
    else
        return 0;
    return Subset_Sum(Ar,gSum-Ar[n],n-1)||Subset_Sum(Ar,gSum,n-1);
}

int main()
{
    int n=5;
    int Ar[] = {5, 7, 15, 25, 42};
    int given_Sum = 63;
    if(Subset_Sum(Ar, n, given_Sum ))
        cout << "Yes";
    else
        cout << "No";
}

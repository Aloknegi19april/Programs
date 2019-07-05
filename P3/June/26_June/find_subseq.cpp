/*
Given two substring find iffirst string is subsequence of second
Backtracking */

#include<bits/stdc++.h>
using namespace std;

bool subsequence(char s1[], char s2[], int m, int n)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if(s1[m-1] == s2[n-1])
        return subsequence(s1,s2, m-1, n-1);

    return subsequence(s1, s2, m, n-1);
}

int main()
{
    char str[] = "AXYD";
    char str2[] = "ADXCPY";

    int len = strlen(str);
    int len1 = strlen(str2);

    if(subsequence(str, str2, len, len1))
        cout << "Yes" << endl;
    else
        cout << "No";
}

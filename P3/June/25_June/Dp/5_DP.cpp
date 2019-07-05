/*Subset sum Problem */

#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(int *Set, int n, int sum)
{
    bool subSet[n+1][sum+1];

    for(int i = 0; i <= n; i++)
        subSet[i][0] = true;

    for(int i = 1; i <= sum; i++)
        subSet[0][i] = false;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= sum; j++)
        {
            if(j < Set[i-1])
                subSet[i][j] = subSet[i-1][j];
            if(j >= Set[i-1])
                subSet[i][j] = subSet[i-1][j] || subSet[i-1][j-Set[i-1]];
        }

    return subSet[n][sum];

}

int main()
{
    int s[] = {0,5, 7, 15, 25, 42};
    int sum = 6;
    int n = sizeof(s)/sizeof(int);
    if(isSubsetSum(s, n, sum))
        cout << "Yes" <<endl;
    else
        cout << "No" <<endl;
}

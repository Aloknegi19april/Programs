#include<bits/stdc++.h>
using namespace std;
long long int sum, z;
#define m 1000000007

long long int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long int findGCD(int arr[], int n)
{
    long long int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        sum=0;
        int i = 1,j = 2, k = 3, l = 4;
        while(i <= n-3)
        {
            int arr[] = { i,j,k,l };

            z = findGCD(arr, n)%m;
            sum+= pow(z,4);
            if(l < n)
            {
                l++;
            }

            else if(k < l-1)
            {
                k++;
            }

            else if(j < k-1)
            {
                j++;
            }

            else if(i < j)
            {
                i++;
            }

            if(l>n&&flag == 0)
            {
                l--;
                flag = 1;
            }

        }
        cout << sum%m <<endl;
    }
}

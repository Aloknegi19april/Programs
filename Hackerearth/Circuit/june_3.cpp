#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        //sum=0;
        int i = 1,j = 2, k = 3, l = 4;

        while(i <= n-3)
        {
            //int arr[] = { i,j,k,l };

            //z = findGCD(arr, n)%m;
        //    sum+= pow(z,4);
        cout << i << " " << j <<  " " << k << " " << l << endl;
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
        //cout << sum%m <<endl;
    }
}

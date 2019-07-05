#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = INT_MIN;
    for(int i = 0; i < n; i++)
        if(arr[i] > max )
            max = arr[i];

    int max2 = INT_MIN;
    for(int i = 0; i < n; i++)
        if(arr[i] > max2 &&arr[i]<max)
            max2 = arr[i];

    cout << max2;
        
}

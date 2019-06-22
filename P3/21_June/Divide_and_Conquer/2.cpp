/* Binary Search
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *Ar, int low, int high, int key)
{
    int mid = (low+high)/2;
    if(low > high)
        return -1;
    if(Ar[mid] == key)
        return mid;
    if(Ar[mid] > key)
        binarySearch(Ar, low, mid-1, key);
    else
        binarySearch(Ar, mid+1, high, key);
}

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
        cin >> Ar[i];

    int key;
    cin >> key;

    cout << binarySearch(Ar, 0,n,key);

}

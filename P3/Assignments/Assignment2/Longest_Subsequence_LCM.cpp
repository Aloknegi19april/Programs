#include<bits/stdc++.h>
using namespace std;
int main() {

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int* i1;
    i1 = std::max_element(arr,arr + n); 

    if(i1 > k)
        cout << i1 - k;
    else
        cout << "0";
	return 0;
}

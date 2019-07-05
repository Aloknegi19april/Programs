#include<bits/stdc++.h>
using namespace std;

template <class T>

void swap_two(T &var1, T &var2)
{
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    char c = 'x',d='y';
    swap_two(c,d);
    int x = 10, y = 20;
    int *p = &x, *q = &y;
    //swap_two(p,q); //not swapping
    swap_two(*p,*q);
     cout << c <<" "<<d <<"\n";
     cout << x <<" "<<y <<"\n";
     cout << *p <<" "<<*q <<"\n";
}

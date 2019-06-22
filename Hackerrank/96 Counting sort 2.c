#include <stdio.h>  
 


int main()
{
    int n, k = 0, A[100], i,j;
    
    int B[100], C[100];
    
    scanf("%d", &n);
    
    for (i = 1; i <=n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > k) {
            k = A[i];
        }
    }
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    
   for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
   
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}

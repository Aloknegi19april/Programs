#include <stdio.h>
#include<stdlib.h>
int main() {
  long long int i, j, k = 0,n, sum[100000], Ar[100000], temp;
  scanf("%lld", &n);
  for (i = 0; i < n; i++) {
    scanf("%lld", &Ar[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i != j) {
        sum[k] = abs(Ar[i] - Ar[j]);
        k++;
      }
    }
  }

  for (i = 0; i < k; i++) {
    for (j = 0; j < k; j++) {
      if (sum[i] < sum[j]) {
        temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
      }
    }
  }
  printf("%lld", sum[0]);
}

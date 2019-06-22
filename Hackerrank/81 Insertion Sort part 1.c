#include<stdio.h>
void insertionSort1(int n, int arr_size, int* arr) {
    // Complete this function
    int a=arr[n],j;
    int k=n-1;
  while(a<arr[k]){
  arr[k+1]=arr[k];
      k--;
      for(j=1;j<=n;j++){
            printf("%d ",arr[j]);
        }
      printf("\n");
  }
    arr[k+1]=a;
     for(j=1;j<=n;j++){
            printf("%d ",arr[j]);
        }
}

int main() {
    int n,arr_i; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * 10500);
    for (arr_i = 1; arr_i <= n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    insertionSort1(n, n, arr);
    return 0;
}

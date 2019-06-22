#include<stdio.h>
int main(){

   int i, j,k, count, temp, number[1000];

   scanf("%d",&count);

   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
       for(k=0;k<count;k++)
      	printf("%d ",number[k]);
      	printf("\n");
   }
   return 0;
}

#include<stdio.h>
int quicksort(int number[1000],int first,int last){
   int i, j, pivot, temp,c=0;;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
            c++;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
   return c;
}

int main(){
   int i, count, number[1000],a;

   scanf("%d",&count);

   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   a=quicksort(number,0,count-1);

	printf("%d",a);
}

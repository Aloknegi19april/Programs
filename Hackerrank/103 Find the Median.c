#include<stdio.h>
int main()
{
    int n,Ar[1000001],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Ar[i]);
    }

    for(i=1;i<n;i++)
    {
      temp=Ar[i];
      j=i-1;
      while((temp<Ar[j])&&(j>=0))
      {
         Ar[j+1]=Ar[j];
         j=j-1;
      }
      Ar[j+1]=temp;
   }
    printf("%d",Ar[n/2]);
}



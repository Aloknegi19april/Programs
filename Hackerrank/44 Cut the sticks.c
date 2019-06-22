#include<stdio.h>

int main()
{
  int i,j,k,count=0,min,arr[1000],n;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("%d\n",n);
  for(i=0;i<n;i++)
  {
    min=10000;
    for(j=0;j<n;j++)
    {
				if(arr[j]<min && arr[j]!=0)
					min=arr[j];
    }
    for(k=0;k<n;k++)
    {
      if(arr[k]==min)
        {
          arr[k]=0;
          count++;
        }
    }
    if(n-count<1)
      break;
    else
      printf("%d\n",(n-count));
  }


  return 0;
}

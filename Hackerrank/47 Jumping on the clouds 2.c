#include<stdio.h>
int main()
{
    int n,i,count=0,arr[30];
    scanf("%d",&n);
    for(i=0;i<n;)
            {
                if(i+2<n)
                {
                    if (arr[i + 1] == 0 && arr[i + 2] == 0)
                    {
                        count++;
                        i += 2;
                    }
                    else if(arr[i + 1] == 0 && arr[i + 2] == 1)
                    {
                        count++;
                        i += 1;
                    }
                    
                }
                else
                {
                    if(i<n-1)
                    count++;
                    i++;
                }
                
            }
           
            printf("%d",count);
    return 0;
} 

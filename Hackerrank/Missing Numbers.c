#include<stdio.h>
int main()
{
    int m,n,i,j,Ar[100000],Br[100000];
    int x[100000],k=0,temp;
    
	
	
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&Ar[i]);
    }
    
    
    
    
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&Br[i]);
    }
  
    int  key; 
   
   
   
   
   
   for (i = 1; i < n; i++) 
   { 
       key = Ar[i]; 
       j = i-1; 
  
       
       while (j >= 0 && Ar[j] >= key) 
       { 
           Ar[j+1] = Ar[j]; 
           j = j-1; 
       } 
       Ar[j+1] = key; 
   } 
     
	 
	 for (i = 0; i < n; i++) 
    {
      printf("%d ", Ar[i]);
    }
	 
	 
	 
	 for (i = 1; i < m; i++) 
   { 
       key = Br[i]; 
       j = i-1; 
  
       
       while (j >= 0 && Br[j] >= key) 
       { 
           Br[j+1] = Br[j]; 
           j = j-1; 
       } 
       Br[j+1] = key; 
   }
   
   
    

    printf("\n ");
    for (i = 0; i < m; i++) 
    {
      printf("%d ", Br[i]);
    }
    printf("\n ");
    for(i=0,j=0;i<n,j<m;i++,j++)
    {
    	printf("\n ");
	   printf("i %d \n ",i);
	   printf("j %d \n ",j);
	   printf("k %d \n ",k);
	   printf("\n ");
       if(Ar[i]!=Br[j])
       {
       		x[k]=Br[j];
       		printf("Ar %d \n ",Ar[i]);
       		printf("Br %d \n ",Br[j]);
       		printf("x %d \n ",x[k]);
       		k++;
       		i--;
	   }
	   
    }
    printf("\n ");
    for (i = 0; i < k; i++) 
    {
      printf("%d ", x[i]);
    }
}

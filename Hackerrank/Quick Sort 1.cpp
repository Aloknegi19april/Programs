#include <bits/stdc++.h>

using namespace std;




QuickSort(int Array[], int first, int last)
{
	
	int pivot = Array[first];
	int i, left[1000], right[1000];
	int j = 0, k=0;
	
	for( i = first + 1; i<=last; i++)
	{
		if(Array[i]<pivot)
		{
			left[j]=Array[i];
			j++;
		}
		else
		{
			right[k]=Array[i];
			k++;
		}
	}
	
	for(i=0 ; i< j; i++)
	{
		Array[i]=left[i];
	}
	Array[i]=pivot;
	for(i=i+1,k=0 ; i< last; i++,k++)
	{
		Array[i]=right[k];
	}
	
	for(i=0 ; i< last; i++)
	{
		printf("%d ",Array[i]);
	}
	
}

int main()
{
    int Array[1000],i,j,n;
    scanf("%d",&n);
    for( i = 0 ; i < n; i++ )
    {
    	scanf("%d",&Array[i]);
	}
	
	int first = 0;
	int last = n-1;
	QuickSort(Array, first, last);
}

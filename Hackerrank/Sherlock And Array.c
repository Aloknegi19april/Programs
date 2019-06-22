#include<stdio.h>

void Sum(int Array[], int first, int last)
{
	int k = 1;
	
	int sum_left = Addition(Array, first, last/2);
	
	int sum_right = Addition(Array, (last/2)+1, last);
	
	if ( sum_left == sum_right)
	{
		printf("YES");
		break;
	}
	
	else if ( sum_left > sum_right)
	{
		Sum(Array, (last/2)-k, last);
		
	}
	
	
}


int Addition(int Array[], int first, int last)
{
	int Add = 0;
	
	for (int index = first; index < last ; index++ )
	{
		Add += Array[index];
	}
	return Add;
}

int main()
{
	int i, j, size_of_array, no_of_cases;
	int first, last, Array[10000];
	
	scanf("%d",&no_of_cases);
	
	for ( i = 0 ; i < no_of_cases ; i++ )
	{
		scanf ( " %d " , & size_of_array );
	}
	
	first = 0;
	last = size_of_array;
	Sum(Array,first,last);
	
	
	
}

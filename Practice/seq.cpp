#include<iostream>
using namespace std;
int main()
{
	int i,j,k ,count=0,flag=0;
	char Ar[]="ACT";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(Ar[i]==Ar[1]&&Ar[j]==Ar[0]&&Ar[k]==Ar[2])
				{
					flag=1;
				}
				if(flag==1)
				{
					count++;
				}
			}
		}
	}
	cout<<count-1;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int q; 
    scanf("%d",&q);
    
    char h[] = "hackerrank";
    int a0,i,j=0;
    for( a0 = 0; a0 < q; a0++)
    {
        j=0;
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if(h[j]==s[i])
            {
                j++;
            }
        }
        if(j==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}


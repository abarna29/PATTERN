INPUT
3
OUTPUT
1 1 1 2 
3 3 3 4 
5 5 5 6 




#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int c=1;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=n;j++)
	    {
	        if(j<n-1)
	        printf("%d ",c);
	        else
	        printf("%d ",c++);
	       
	        
	    }
	    printf("\n");
	}
	return 0;
}

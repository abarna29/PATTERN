INPUT
4
OUTPUT
1
2 *  3
4 *  5 *  6
7 *  8 *  9 * 10
11 * 12 * 13 * 14 * 15

#include <stdio.h>

int main() 
{
	int n;
	scanf("%d",&n);
	int c=0;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	    	if(i==j)
	        printf("%3d\n",++c);
	        else
	        printf("%3d *",++c);
	    }
	}
	return 0;
}
ERROR
#include <stdio.h>

int main() 
{
	int n;
	scanf("%d",&n);
	int c=1;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        printf("%d* ",c);
	       
	        c++;
	        
	    }
	    printf("\b \n");
	}
	return 0;
}

INPUT
5
4
OUTPUT
1   2   3   4   5 
6   7   8   9  10 
11  12  13  14  15 
16  17  18  19  20 
#include <stdio.h>

int main() 
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int c=0;
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        printf("%3d ",++c);
	    }
	    printf("\n");
	}
	return 0;
}

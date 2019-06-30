
INPUT
5
OUTPUT
1   2   3   4   5  
6   7   8   9  10  
11  12  13  14  15  
16  17  18  19  20  
21  22  23  24  25  

#include <stdio.h>

int main() 
{
	int n;
	scanf("%d",&n);
	int c=1;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        printf("%3d ",c);
	       
	        c++;
	        
	    }
	    printf("\b \n");
	}
	return 0;
}

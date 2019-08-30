/* C Program - Print ASCII Values of Characters */
		
#include<stdio.h>
#include<math.h>
void main()
{
int n,c,d;
scanf("%d",&n);
int r=n*2-1;
for(int i=0;i<r;i++)
{
    for(int j=0;j<r;j++)
    {
        c=abs(i-r/2);
        d=abs(j-r/2);
        c>d?printf("%d ",c+1):printf("%d ",d+1);
    }
    printf("\n");
}
}

        

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
INPUT:
5
OUTPUT:
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

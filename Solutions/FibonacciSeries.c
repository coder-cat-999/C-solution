//C program to print fibonacci series
#include <stdio.h>
int main()
{	
	int n;
	printf("Please enter the number of elements you want to print the series");
	scanf("%d",&n);
	
    int a=1, b=0,c,i;
    printf("%d ",b);
    printf("%d ",a);
    for(i=0; i<(n-2); i++)
    {
        c=a+b;
    
        printf("%d ",c );
        
        b=a;
        a=c;
    }
    return 0;
}
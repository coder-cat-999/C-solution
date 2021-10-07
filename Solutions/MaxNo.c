//C program to print maximum number
#include <stdio.h>

int main()
{   
    int n;
    printf("How many elements will you enter: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elements in array ");
    for(int i=0; i<=(n-1); i++)
    {
      scanf("%d",&arr[i]);  
    }

    int max=arr[0];
    for(int i=0;i<(n-1);i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximum number= %d", max);

}
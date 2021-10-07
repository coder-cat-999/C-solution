//C program to perform linear search in array.
#include <stdio.h>

int main()
{
   
    int num[10],i,count=0,search;
    
    //entering values in array
    printf("enter values in array ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        
    }
   
   //searching given element in array
   printf("enter element to be searched ");
   scanf("%d",&search);
   
   for(i=0;i<10;i++)
    {
        if(num[i]==search)
        {   
            printf("%d is found at index %d\n", search, i+1);
            
        count++;
        }
    } 
    printf("%d is occuring %d times",search,count);
        //else if(num[i]!=search) 
    if (i==search)   
    {printf("element not found");}
        
        
   
        
    
    return 0;
    
}
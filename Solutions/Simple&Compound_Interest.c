//C program to find our simple and compound Interest
#include <stdio.h>
#include <math.h>

int p,t;
float r;
#define si (p*r*t/100)
#define siA (p+si)
#define ciA (p*(pow((1+(r/100)),t)))
#define ci (ciA-p)

 

int main()
{
    
    
    printf("Enter principle amount, rate of interest, time: ");
    scanf("%d %f %d",&p,&r,&t);
    
    printf("simple interest= %.2f\n",si);
    printf("simple interest amount= %.2f\n\n",siA);
    
    printf("compound interest= %f\n",ci);
    printf("compond interest amount= %f\n",ciA);
    
    
}
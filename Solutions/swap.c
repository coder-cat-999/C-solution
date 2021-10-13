#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number 1 and number 2:"); //a=3 b=4
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d,b=%d\n",a,b);
    a=a+b; //a=3 a=4+3=7
    b=a-b; //b=4 b=7-3=4
    a=a-b; //a=7 a=7-4=3
    printf("After swap a=%d,b=%d",a,b);
    return 0;
}

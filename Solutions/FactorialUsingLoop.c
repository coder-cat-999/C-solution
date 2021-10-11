#include<stdio.h>

int main() {
    int n;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    //logic
    int a[200], times, temp;
    a[0] = 1;
    times = 0;

    for(; n>=2; n--) {
        temp = 0;
        for(int i = 0; i<=times; i++) {
            temp = (a[i] * n) + temp;
            a[i] = temp % 10;
            temp = temp / 10;
        }

        while(temp > 0) {
            a[++times] = temp % 10;
            temp = temp / 10;
        }
    }

    //print result
    for(int i = times; i>=0; i--)
        printf("%d", a[i]);

    return 0;
}
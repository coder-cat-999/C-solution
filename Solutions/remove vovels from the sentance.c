#include<stdio.h>
#include<ctype.h>

int fnd(char c){
char v[]={'a', 'e', 'i', 'o', 'u'};
for(int i=0; i<5; i++)
    if (tolower(c) == v[i])
        return 1;
return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    char s[n], c[n];
    scanf("%[^\n]%*c", s);
    for(int i=0, j=0; i<n; i++)
    {
        if(s[i] == 0)
        {
            c[j] = s[i];
            j++;
        }
    }
printf("%s", c);
}
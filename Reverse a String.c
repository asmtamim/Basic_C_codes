#include<stdio.h>
int main()
{
    char str[99];
    gets(str);
    strrev(str);
    printf("%s",str);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");

    gets(str);

    printf("Upper case of %s\n",strupr(str));
    printf("Lower case of %s\n", strlwr(str));

    return 0;
}

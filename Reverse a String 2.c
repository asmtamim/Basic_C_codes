#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,length;
    char str1[99],str2[99];
    gets(str1);
    length=strlen(str1);
    for(a=0,b=length-1;a<length;a++,b--){
        str2[b]=str1[a];
    }
    str2[b]='\0';
    printf("%s",str2);
    return 0;
}

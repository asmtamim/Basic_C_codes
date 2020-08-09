#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0,sum=0;
    char ch[1000];
    gets(ch);
    int length=strlen(ch);

    for(i=0; i<=length; i++){
        if(ch[i]>='a' && ch[i]<='z'){
            flag=1;
        }
        if((ch[i]==' ' && flag==1) || (ch[i]=='\0' && flag==1)){
            sum=sum+1;
            flag=0;
        }
    }
    printf("%d words. (ignoring spaces)\n",sum);

    return 0;
}

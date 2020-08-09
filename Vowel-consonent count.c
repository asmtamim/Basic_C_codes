#include<stdio.h>
int main()
{
    int x,y,vowel=0,consonant=0;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        char ch;
        scanf("%c",&ch);
        if(ch>='a' && ch<='z')
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                printf("Vowel\n");
                vowel=vowel+1;
            }
            else
            {
                printf("Consonant\n");
                consonant=consonant+1;
            }
        }
    }

    printf("\n");
    printf("Vowel    : %d\n",vowel);
    printf("Consonant: %d\n",consonant);

    return 0;
}

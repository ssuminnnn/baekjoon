//baejoon 2439 별찍기-2 25.1.22.
#include<stdio.h>
int main(void)
{
    int count=0;
    scanf("%d",&count);
    
    for(int i=0; i<count; i++)
    {
        for(int j=count-i-1; j>0; j--)
       {
           printf(" ");
        }
        for(int k=1; k<i+2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//baekjoon 2240 별찍기-3 25.01.24.
#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

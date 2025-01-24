//  baekjoon_2742 기찍 N 25.01.24.
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d",n-i);
        printf("\n");
    }
    return 0;
}

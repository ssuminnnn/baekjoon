//  baekjoon 2845 파티가 끝나고 난 뒤 25.01.24
#include<stdio.h>
int main(void)
{
    int m;
    int p;
    
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    
    int r=0;
    
    scanf("%d %d",&m,&p);
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    
    r=m*p;
    int nn1;
    int nn2;
    int nn3;
    int nn4;
    int nn5;
    
    nn1=n1-r;
    nn2=n2-r;
    nn3=n3-r;
    nn4=n4-r;
    nn5=n5-r;
    
    printf("%d %d %d %d %d",nn1,nn2,nn3,nn4,nn5);
    return 0;
}

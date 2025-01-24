//  baekjoon_2480 주사위 세개
#include <stdio.h>
int main(void)
{
    int n1;
    int n2;
    int n3;
    int m=0;
    int max;
    
    scanf("%d %d %d",&n1,&n2,&n3);
   
    
    
    if(n1!=n2&& n2!=n3&& n1!=n3)
    {
        max=n1;
        if(max<n2){
            max=n2;
        }
        if(max<n3)
        {
            max=n3;
        }
        m=max*100;
        printf("%d",m);
    }
    
    if(n1==n2|| n1==n3|| n2==n3)
    {
        if(n1==n2)
        {
            m=1000+(n1*100);
        }
        if(n1==n3)
        {
            m=1000+(n1*100);
        }
        if(n2==n3)
        {
            m=1000+(n2*100);
        }
        if(n1==n2&&n2==n3)
        {
            m=10000+(n1*1000);
            
        }
        printf("%d",m);
    }
    return 0;
}

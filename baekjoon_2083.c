//baekjoon 2083 럭비클럽
#include<stdio.h>
int main(void)
{
    char name[20];
    int age;
    int weigth;
    
    while(1)
    {
        scanf("%s %d %d",name,&age,&weigth);
        if(age==0)
        return 0;
        if(age>17||weigth>=80)
            printf("%s Senior\n",name);
        else{
            printf("%s Junior\n",name);
        }
       
    }
    return 0;
}

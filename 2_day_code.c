/* adding using function*/

#include<stdio.h>
int add();
int add()
{
    int a,b,sum;
    printf("\n enter the value of a:");
    scanf("%d",&a);
    printf("\n enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    printf("%d",sum);
    return sum;
}

int main()
{
    add();
printf("\n result after adding= %d",add());

 return 0;
}
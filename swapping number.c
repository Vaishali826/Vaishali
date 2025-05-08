/*Swappping number*/
#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d and %d",a,b);
    return 0;
}
/*Swappping number using arithmetic operators*/
#include<math.h>
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("After swapping: %d and %d",a,b);
    return 0;
}
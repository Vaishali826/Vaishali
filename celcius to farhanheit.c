/*convert temperature*/
#include<math.h>
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the temperature:");
    scanf("%d",&a);
    b=((a*9/5)+32);
    
    
    printf("After converting: %d",b);
    return 0;
}
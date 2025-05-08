#include<stdio.h>
//function decleration
int add(int a,int b);
void greet();
void printResult(int result);

int main(){
    int num1=10, num2=20;
    greet();//function with no return and no parameter
    int sum=add(num1,num2);// calling function with return
    printResult(sum);//passing result to another function
    return 0;
}
//function definition
int add(int a,int b){
    return a+b;
    
}
void greet(){
    printf("Welcome to the function demo program!\n");
}

void printResult(int result){
    printf("%d",result);
}
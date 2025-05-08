#include<stdio.h>
int main(){
    int age=25;
    int haslicense=1;
    if(age>18){
        if(haslicense){
            printf("you can drive\n");
        }else{
            printf("you need a license to drive\n");
        }
    }else{
        printf("you are too young to drive\n");
    }
      return 0;  
        
}
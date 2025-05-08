#include<stdio.h>
int main(){
    int day=3;
    switch(day){
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        case 3:
        printf("wednesday\n");
        break;
        default:
        printf("invalid day\n");
    }
    return 0;
}
include<stdio.h>
struct point{
    int x,y;
}
int main(){
    struct point p={10,20};
    printf("%d",p.y);
    return 0;
}
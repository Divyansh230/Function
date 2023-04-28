#include <stdio.h>

int max(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}
int min(int x,int y){
    if(x<y)
    return x;
    else
    return y;
}
int main(){
    int a,b;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);
    printf("Max :%d\nMin:%d",max(a,b),min(a,b));
    return 0;
}
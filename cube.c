#include <stdio.h>

int cub(int r){
    return r*r*r;
}
int main(){
    int i;
    printf("Enter Number:");
    scanf("%d",&i);
    printf("Cube of the Number is:%d",cub(i));
    return 0;
}
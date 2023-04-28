#include <stdio.h>

void Oe(int a){
    if(a&1)
    printf("Odd Number");
    else
    printf("Even Number");
}

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    Oe(num);
    return 0;
}
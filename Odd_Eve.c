#include <stdio.h>

void Odd(int n){
    for(int i=1;i<=n;i+=2)
    printf("%d\n",i);
}

void Eve(int n){
    for(int i=2;i<=n;i+=2)
    printf("%d\n",i);
}

int main(){
    int n;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Odd Number are:");
    Odd(n);
    printf("Even Number:");
    Eve(n);
}
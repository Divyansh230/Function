#include <stdio.h>
int pri(int *a){
    printf("%d",a);
    return 0;
}

int main(){
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    scanf("%d",&a[i]);
    pri(a);
    return 0;
}
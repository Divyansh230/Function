#include <stdio.h>

void prime(int x){
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        break;

    }
    if(i==x/2+1)
    printf("%d,",x);
}
int main(){
    int l;
    printf("Enter range: ");
    scanf("%d",&l);
    for(int i=2;i<=l;i++)
    prime(i);
    return 0;
}
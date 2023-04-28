#include <stdio.h>

int prime(int x){
    int c=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)
        c+=1;
    }
    if(c==2)
    return 1;
    else
    return 0;
}

int main(){
    int up,low;
    printf("Enter Lower and Upper Limit");
    scanf("%d%d",&up,&low);
    for(int i=low;i<=up;i++){
    if(prime(i))
    printf("%d",i);
    }
    return 0;
}
#include <stdio.h>
void armstrong(int q){
    int t=q;
    int c=0,s=0;
    while(t!=0){
        c++;
        t/=10;
    }
    t=q;
    while(t!=0){
        int r=t%10;
        int p=1;
        for(int i=1;i<=c;i++)
        p*=r;
        s+=p;
        t/=10;
    }
    if(s==q)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
}
void prime(int q){
    int i;
    for(i=2;i<q;i++){
        if(q%i==0)
        break;
    }
    if(i==q)
    printf("Prime Number");
    else
    printf("Not a Prime Number");
}
void perfect(int q){
    int s=0;
    for(int i=1;i<q;i++)
    {
        if(!i%2)
        s+=i;
    }
    if(s==q)
    printf("Perfect Number");
    else
    printf("Not a Perfect Number");
}

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    armstrong(num);
    prime(num);
    perfect(num);
    return 0;
}
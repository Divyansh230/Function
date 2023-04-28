#include <stdio.h>

int power(int x,int y){
    int p=1;
    for(int i=1;i<=y;i++)
    p*=x;
    return p;
}
void armstrong(int y){
    int t=y;
    int c=0;
    while(t!=0){
        c++;
        t/=10;
    }
    t=y;
    int s=0;
    while(t!=0){
        s+=power(t%10,c);
        t/=10;
    }
    if(s==y)
    printf("%d,",y);        
}
int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    armstrong(i);
    return 0;
}
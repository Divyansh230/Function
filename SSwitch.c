#include <stdio.h>
int fact(int);
void strong(int);
int power(int x,int y){
    int p=1;
    for(int i=1;i<=y;i++)
    p*=x;
    return p;
}
int armstrong(int y){
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
    return 1;
    else
    return 0;
}
int prime(int x){
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    return 1;
    else
    return 0;
}
int neon(int x){
    int sq=power(x,2);
    int s=0;
    while(sq!=0){
        s+=sq%10;
        sq/=10;
    }
    if(s==x)
    return 1; 
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ch;
    int i=0;
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Choice is Armstrong\n");
        i=armstrong(num);
        if(i)
        printf("Armstrong");
        else
        printf("Not a Armstrong");
        break;
        case 2:
        printf("Choice is Prime\n");
        i=prime(num);
        if(i)
        printf("Prime");
        else
        printf("Not prime");
        break;
        case 3:
        printf("Choice is Neon\n");
        i=neon(num);
        if(i)
        printf("Neon");
        else
        printf("Not a neon");
        break;
        case 4:
        printf("Choce is Strong1\n");
        strong(num);
        break;
        default:
        printf("Choice is not right");
    }
    return 0;
}
int fact(int x){
    int p=1;
    for(int i=1;i<=x;i++)
    p*=i;
    return p;
}
void strong(int x)
{
    int t=x;
    int s=0;
    while(t!=0)
    {
        s+=fact(t%10);
        t/=10;
    }
    if(s==x)
    printf("Strong Number");
    else
    printf("Not a Strong Number");
}
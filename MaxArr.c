#include <stdio.h>

int max(int n,int a[n]){
    int m=a[0];
    for(int i=1;i<n;i++)
    {
        if(m<a[i])
        m=a[i];
    }
    return m;
}
int main(){
    int n;
    printf("Enter Size of the Array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Maximum element of the Array:%d",max(n,a));
    return 0;
}
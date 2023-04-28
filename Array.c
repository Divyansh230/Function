#include <stdio.h>

void input(int n,int arr[n]){
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
}

void print(int n,int arr[n]){
    for(int i=0;i<n;i++)
    printf("%d,",arr[i]);
}

void sum(int n,int arr[n]){
    int s=0;
    for(int i=0;i<n;i++)
    s+=arr[i];
    printf("Sum of elements of the array is %d",s);
}

void max_min(int n,int arr[n]){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    printf("Maximum element is:%d",arr[max]);
    }
    printf("Maximum element is:%d",max);
}

int main(){
    int n;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in Array:");
    input(n,a);
    printf("Your array is:");
    print(n,a);
    sum(n,a);
    max_min(n,a);
    return 0;
}
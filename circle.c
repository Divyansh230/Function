#include <stdio.h>

int dia(int x){
    return 2*x;
}
float cir(int x){
    return 2*3.14*x;
}
float ar(int x){
    return 3.14*x*x;
}

int main(){
    int r;
    printf("Enter radius");
    scanf("%d",&r);
    printf("Circumference:%f\nArea:%f\nDiameter:%d",cir(r),ar(r),dia(r));
    return 0;
}
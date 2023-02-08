#include<stdio.h>
int main(){
    int a,b,T;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    T=a;
    a=b;
    b=T;
    printf("now a and b = %d%d ",a,b);\
    return 0;
}

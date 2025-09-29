#include<stdio.h>
int main(){
    int a = 0,i = 1,jc = 1;
    for(i=1;i<=7;i++){
        jc = jc*i;
        a = jc + a;
    }
    printf("%d",a);
    return 0;
}
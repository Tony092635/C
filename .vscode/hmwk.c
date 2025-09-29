#include<stdio.h>
int main(){
    int i,jc=1,sum=0,k=0;
    for(i = 1;i<=7;i++){
        jc=1;
        for(k=1;k<=i;k++){
            jc=k*jc;
        }
        sum = jc+sum;
    }
    printf("%d",sum);
    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n>=0 && n<=100){
        printf("YA");
    }else if(n>=-10000 && n<= 10000){
        printf("TIDAK");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int N, h;

    scanf("%d", &N);
    if(N==2 || N==3 || N==5){
        h=4;
    }else{
        h=3;
    }
    printf("%d", h);
}
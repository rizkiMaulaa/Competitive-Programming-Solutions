#include <stdio.h>

int main(){
    int A, B;
    char op;

    scanf("%d %c %d", &A, &op, &B);
    if(op=='+'){
        printf("%d", A+B);
    }else if(op=='-'){
        printf("%d", A-B);
    }else if(op=='*'){
        printf("%d", A*B);
    }else if(op=='<'){
        if(A<B){
            printf("benar");
        }else{
            printf("salah");
        }
    }else if(op=='>'){
        if(A>B){
            printf("benar");
        }else{
            printf("salah");
        }
    }else if(op=='='){
        if(A==B){
            printf("benar");
        }else{
            printf("salah");
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 100:
bayar atau kabur*/
int main(){
    int T, i, m, L, R, J, X;
    char S[5];
    scanf("%d", &T);
    for(i=0; i<T; i++){
        m=0;
        scanf("%d %d %d %d %s", &L, &R, &J, &X, &S);
        if(strcmp(S,"bayar")==0){
            printf("%d\n", X-(R*L*J));
        }else{
            printf("%d\n", -(R*L*J));
        }
    }
    return 0;
}
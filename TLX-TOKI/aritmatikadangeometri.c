#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 94:
aritmatika dan geometri*/
int main(){
    int T, i;

    scanf("%d", &T);
    int A[T][T];
    for(i=0; i<T; i++){
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    for(i=0; i<T; i++){
        if(A[i][2]-A[i][1]==A[i][1]-A[i][0]){
            printf("%d\n", (A[i][2]-A[i][1]+A[i][2]));
        }else if(A[i][2]/A[i][1]==A[i][1]/A[i][0]){
            printf("%d\n", (A[i][2]/A[i][1]*A[i][2]));
        }
    }
    return 0;
}
#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 68:
permainan klasik*/
int main(){
    int T, i;

    scanf("%d", &T);
    int a[T];
    for(i=0; i<T; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<T; i++){
        if(a[i]%6==0){
            printf("TIDAK\n");
        }else{
            printf("YA\n");
        }
    }
    return 0;
}
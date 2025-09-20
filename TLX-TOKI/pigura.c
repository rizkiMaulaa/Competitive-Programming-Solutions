#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 77:
pigura*/
int main(){
    int K, D, i, j;
    char C;

    scanf("%d %c %d", &K, &C, &D);
   // scanf("%c", &C);
    //scanf("%d", &D);
    for(i=0; i<K; i++){
        for(j=0; j<K; j++){
            if(i==0 || i==K-1){
                printf("%d", D);
            }else{
                if(j==0 || j==K-1){
                    printf("%d", D);
                }else{
                    if(K%2==1){
                        if(i==K/2 && j==K/2){
                            printf("*");
                        }else{
                            printf("%c", C);
                        }
                    }else{
                        printf("%c", C);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
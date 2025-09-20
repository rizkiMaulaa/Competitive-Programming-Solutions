#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 66:
Petak Anti Nol*/
int main(){
    int N, M, i, j, x=0;

    scanf("%d %d", &N, &M);
    int h[N][M];
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d", &h[i][j]);
            if(h[i][j]==1){
                x=1;
                break;
            }
        }
    }
    if(x==1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
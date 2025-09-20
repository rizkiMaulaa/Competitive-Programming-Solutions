#include <stdio.h>

int main(){
    int N, M, i, j, h=0;

    scanf("%d %d", &N, &M);
    int a[N], b[M];
    for(i=0; i<M; i++){
        printf("? 1 %d", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++){
        printf("? %d 1", i+1);
        scanf("%d", &b[i]);
    }
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            h+=b[i]^a[i]^a[0];
        }
    }
    printf("! %d", h);
    return 0;
}
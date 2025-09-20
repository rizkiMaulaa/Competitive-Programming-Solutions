#include <stdio.h>

int main(){
    int S, N, D, i, h;

    scanf("%d %d %d", &S, &N, &D);

    for(i=0; i<N; i++){
        h=S+(i*D);
        printf("%d\n", h);
    }
    
}
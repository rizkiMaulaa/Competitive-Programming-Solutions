#include <stdio.h>

int main(){
    int N, i, h;

    //scanf("%d", &N);
    int m[N];
    
    for(i=0; i<N; i++){
        scanf("%d", &m[i]);
    }
    h=0;
    for(i=0; i<N; i++){
        h=h+m[i];
    }
    printf("%d", h);
    return 0;
}
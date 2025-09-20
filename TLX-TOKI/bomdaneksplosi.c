#include <stdio.h>

int main(){
    int N, M, R;

    scanf("%d %d %d", &N, &M, &R);
    int h=min(M, N);
    int ha=R*2+1;
    int ht=(h+ha-1)/ha;
    return 0;
}
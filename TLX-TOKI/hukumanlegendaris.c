#include <stdio.h>
#include <string.h>

int main(){
    int T, i, j;
    char S[1000];
    int m;

    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &m);
        scanf("%[^\n]", &S[i]);
        break;
    }
    
    for(i=1; i<=T; i++){
        printf("KASUS #%d\n", i);
        for(j=0; j<m; j++){
            printf("%c\n", S);
        }
    }
    return 0;
}
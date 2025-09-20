#include <stdio.h>


long long int h(long a, long b){
    int i, m=1;
    for(i=1; i<=b; i++){
        m=m*a;
    }
    return m;
}
int main(){
    long long int N, i, a, l;
    scanf("%lld", &N);
    for(i=0; i<=22; i++){
        N=N+h(5,i);
    }
    for(i=22; i>=0; i--){
        a=h(5, i);
        l=(N/a);
        N=N-(l*a);
        if(l>2){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}

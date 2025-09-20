#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 45:
its magic*/

int main(){
    int K, N;

    scanf("%d %d", &K, &N);
    printf("Think of a number, any number\n");
    printf("Multiply it by %d\n", K);
    printf("Add %d to your number\n", K*N);
    printf("Now, divide your total by %d\n", K);
    printf("Finally, subtract the result from the first number you pick\n");
    printf("BRAVO!!!\n");
    printf("Your answer is %d\n", N);
    return 0;
}
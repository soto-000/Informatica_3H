#include <stdio.h>
#define N 10
void sposta(int v1[],int v2[]);
void sposta(int v1[], int v2[]) {
    for (int i = 0, j = N - 1; i < N; i++, j--) 
    {
        v1[i] = v2[j];
    }
}

int main() {
    int v1[N] = {0};
    int v2[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sposta(v1, v2);
    printf("Array invertito: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", v1[i]);
    }
    printf("\n");
    return 0;
}

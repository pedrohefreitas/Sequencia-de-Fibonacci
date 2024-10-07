#include <stdio.h>

int isFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    while (nextTerm < n) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return (nextTerm == n || n == 0);
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}

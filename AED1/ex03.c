#include <stdio.h>

int fack(int m, int n) {
    int valor;
    if(m==0) valor = (n + 1);
    else {
        if(m>0 && n==0) valor = fack(m-1, 1);
        else valor = fack(m-1, fack(m, n-1));
    }
    return (valor);
}

int main() {

    int m, n;
    int Ackermann;       //Funcao de Ackermann

    scanf("%d %d", &m, &n);

    Ackermann = fack(m, n);
    printf("%d\n", Ackermann);

    return 0;
}
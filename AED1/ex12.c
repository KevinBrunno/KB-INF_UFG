#include <stdio.h>
#define MAX 100

int main() {

    //se retornar para a posicao inicial esta em loop; posicao [0][0] finaliza com sucesso (saida);
    int M[MAX][MAX]= {0};
    int m, n, i, j, x, y, count=0;

    scanf("%d %d", &m, &n);                 //dimensoes da matriz
    for(i=0; i<m; i++) {
        for(j=0; j<n*2; j++) {
            scanf("%d", &M[i][j]);          //pares de coordenadas
        }
    }

    scanf("%d %d", &x, &y);                 //posicao inicial
    i = M[x][y+y];
    j = M[x][(y+y)+1];
    
    while(count != 999999) {
        m = x;
        n = y;
    
        x = M[m][n+n];
        y = M[m][(n+n)+1];
        //printf("\n%d %d\n", x, y);        //teste
        if(x==i && y==j && count>0) {
            printf("preso\n");
            break;
        }
        else if(x==0 && y==0) {
            printf("vence\n");
            break;
        }
        count++;
    }

    return 0;
}
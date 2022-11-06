#include <stdio.h>
#define MAX 500

int main() {

    int t[MAX][MAX]= {0};
    int N, i, j, x=1, y=1;
    int seg=0;                                      //celulas (nao) seguras
    char seta;

    scanf("%d%*c", &N);

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%c%*c", &seta);
            if(seta == 'v') t[i][j] = 1;            //celula abaixo; mesma coluna       (1)
            else {
                if(seta == '<') t[i][j] = 2;        //celula a esquerda; mesma linha    (2)
                else if(seta == '>') t[i][j] = 3;   //celula a direita; mesma linha     (3)
                else t[i][j] = 4;                   //celula acima; mesma coluna        (4)
            }
        }
    }

    //Verificar saidas nas extremidades 
    for(j=0; j<N; j++) {
        if(t[0][j]==4 || t[0][0]==2 || t[0][N-1]==3) {
            seg++;
            t[0][j]= (-1);
            // break;
        }
        else if(t[N-1][j]==1 || t[N-1][0]==2 || t[N-1][N-1]==3) {
            seg++;
            t[N-1][j]= (-1);
        }
    }
    for(i=1; i<N-1; i++) {
        if(t[i][0]==2) {
            seg++;
            t[i][0]= (-1);
            // break;
        }
        else if(t[i][N-1]==3) {
            seg++;
            t[i][N-1]= (-1);
        }
    }

    if(seg > 0) {
        for(i=0; i<N; i++) {
            for(j=0; j<N; j++) {

            }
        }

    } else {
        printf("%d\n", N*N);                        //Todas as celulas sao seguras                
    }
                                                    
    // for(i=0; i<N; i++) {
    //     for(j=0; j<N; j++) {
    //         if(t[i][j] == 1) x++;   //arrumar logica de caminhar pelas posicoes
    //         // printf("%d ", t[i][j]);
    //     }
    //     // printf("\n"); 
    // }    

    return 0;
}
#include <stdio.h>
    int main (){
 // movimento da torre: movendo 5 casas para direita usando o for
        int i;
        printf("Movimento da torre: movendo 5 casas para a direita \n");

        for (i = 0; i < 5; i++){
            printf("Direita \n");
        }

 // movimento do bispo: movendo 5 casas para a diagonal para cima e direita usando o while
        int j = 0;
        printf("Movimento do bispo: movendo 5 casas para a diagonal para cima e a direita \n");

        while (j < 5){
            printf("Diagonal para cima e direita \n");
            j++;
        }

 // movimento da rainha: movendo 8 casa para esquerda usando o do while
        int k = 0;
        printf("Movimento da rainha: movendo 8 casas para a esquerda \n");

        do {
            printf("Esquerda \n");
            k++;
        } while (k < 8);
        
        
        return 0;
        
    }
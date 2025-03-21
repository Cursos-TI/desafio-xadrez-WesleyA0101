#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Nivel aventureiro

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("Movimento da torre:\n");
    for(int i = 1; i <= 5; i++){
	printf("Direita\n");    
    
    }
    printf("\n");

    printf("Mocimento do bispo\n");
    int j = 1;
    while(j <= 5){
        printf("Cima, direita\n");
	j++;
    
    }
    printf("\n");



    printf("Movimento da rainha:\n");
    int k = 1;
    do{

        printf("Esquerda\n");
	k++;
    
    }while(k <= 8);


    printf("Movimento do cavalo:\n");

    for(int i = 0; i < 2; i++){
        printf("Baixo\n");
    
        if(i == 1){
	    int l = 0;
	    while(l < 1){
	        printf("Esquerda\n");
		l++;
	    
	    
	    }
	
	}
    }

    return 0;
}

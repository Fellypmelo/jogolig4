#ifndef jogolig4_h
#define jogoli4_h
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int printtabuleiro(char tabuleiro1[42]){
	
		printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[0], tabuleiro1[1], tabuleiro1[2], tabuleiro1[3], tabuleiro1[4], tabuleiro1[5], tabuleiro1[6]);
    	printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[7], tabuleiro1[8], tabuleiro1[9], tabuleiro1[10], tabuleiro1[11], tabuleiro1[12], tabuleiro1[13]);
    	printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[14], tabuleiro1[15], tabuleiro1[16], tabuleiro1[17], tabuleiro1[18], tabuleiro1[19], tabuleiro1[20]);
	   	printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[21], tabuleiro1[22], tabuleiro1[23], tabuleiro1[24], tabuleiro1[25], tabuleiro1[26], tabuleiro1[27]);
	    printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[28], tabuleiro1[29], tabuleiro1[30], tabuleiro1[31], tabuleiro1[32], tabuleiro1[33], tabuleiro1[34]);
    	printf("| %c | %c | %c | %c | %c | %c | %c |\n", tabuleiro1[35], tabuleiro1[36], tabuleiro1[37], tabuleiro1[38], tabuleiro1[39], tabuleiro1[40], tabuleiro1[41]);
}

//FUNO PARA JOGADA DO JOGADOR X
 	int jogadorX(char tabuleiroX[42]){
    char X = 'X';
    char O = 'O';
    char traco = '-';
    int aux = 0;  //aux = auxiliar de fileira
    int aux2;     //aux2 = auxiliar de posicao
    int aux3 = 0;
    system("COLOR B0");
	printf("Jogador X, em qual fileira quer colocar o 'X'? ");
    scanf("%d", &aux);
   
    for ( aux2 = (34 + aux) ; aux2 >= 0 ; ){
    
	if ( aux > 7 || aux < 1 )
    {
        printf("Essa fileira nao existe!!");
        aux3 = 1;
        break;
    } else if ( tabuleiroX[aux-1] == X || tabuleiroX[aux-1] == O )
    {
        printf("Essa fileira esta cheia!!");
        aux3 = 1;
        break;
    } else if ( tabuleiroX[aux2] == traco )
    {
        tabuleiroX[aux2] = 'X';
        break;
    } else {
        aux2 = (aux2 - 7);
    }
}
    if (aux3 == 1)
    {
        jogadorX(tabuleiroX);
    }    
}

//FUNO PARA JOGADA DO JOGADOR O
	int jogadorO(char tabuleiroO[42]){
    char X = 'X';
    char O = 'O';
    char traco = '-';
    int aux = 0;  //aux = auxiliar de fileira
    int aux2;     //aux2 = auxiliar de posicao
    int aux3 = 0;
   
   	system("COLOR B4");
    printf("Jogador O, em qual fileira quer colocar a 'O'? ");
    scanf("%d", &aux);

    for ( aux2 = (34 + aux) ; aux2 >= 0 ; ){
    
	if ( aux > 7 || aux < 1 )
    {
        printf("Essa fileira nao existe!!");
        aux3 = 1;
        break;
    } else if ( tabuleiroO[aux-1] == X || tabuleiroO[aux-1] == O )
    {
        printf("Essa fileira esta cheia!!");
        aux3 = 1;
        break;
    } else if( tabuleiroO[aux2] == traco )
    {
        tabuleiroO[aux2] = 'O';
    	break;
  	} else {
        aux2 = (aux2 - 7);
    }
       
    }    
    if (aux3 == 1)
    {
        jogadorO(tabuleiroO);
    }
}
#endif

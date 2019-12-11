#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "jogolig4.h"
	
int main () {
	
	FILE *arquivo;
	char nomes[20];
	arquivo = fopen ("arquivo.txt","w");//o W cria um arquivo, se ja existir ele sobreescreve.
	
	if (arquivo == NULL){
		printf("Erro na abertura do arquivo");
	} 
	printf ("Escreva os nomes dos jogadores: ");
	scanf("%s", nomes);
	
	fprintf(arquivo, "%s", nomes);
	fclose (arquivo);
	printf("Foi gravado.");
	
	

	setlocale(LC_ALL, "Portuguese");
	//declarao das variaveis.
	char nome[50];
	int num;
	char tabuleiro[42];
    char X = 'X';
    char O = 'O';
    char traco = '-';
    int aux;
    int auxstrcmp;
    int finalizador = 0;
   
    printf("\n\n\n\n");   
    printf("\t\tXX       XX     XXXXXX   XX    XX    \n");
    printf("\t\tXX       XX   XX         XX    XX    \n");
    printf("\t\tXX       XX   XX         XX    XX    \n");
    printf("\t\tXX       XX   XX XXXX    XXXXXXXX    \n");
    printf("\t\tXX       XX   XX     XX        XX    \n");
    printf("\t\tXX       XX   XX     XX        XX    \n");
    printf("\t\tXXXXXX   XX     XXXXX          XX    \n");
    printf("\n");    
    printf("\t\tXXXXXXX  XX    XX   XXXXX   XXX         XXX    \n"); 
    printf("\t\tXXXXXXX  XX    XX  XX   XX  XXX         XXX    \n");
    printf("\t\tXX       XX    XX  XX   XX  XXX    X    XXX    \n");
    printf("\t\tXXXXXXX  XXXXXXXX  XX   XX  XXX   XXX   XXX    \n");
    printf("\t\t     XX  XX    XX  XX   XX  XXX  XX XX  XXX    \n");
    printf("\t\tXXXXXXX  XX    XX  XX   XX  XXX XX   XX XXX    \n");
    printf("\t\tXXXXXXX  XX    XX   XXXXX    XXXX     XXXX     \n\n");                     
      
    system("COLOR B4");                                               
   	printf ("\t*------------------------------------------------------*\n");    
	printf ("\t|                    MENU DE OPCOES                    |\n");
	printf ("\t*------------------------------------------------------*\n");
	printf ("\t|  1 - INICIAR O JOGO                                  |\n");    
	printf ("\t|  2 - VER INSTRUÇÕES DO JOGO E INFORMAÇÕES            |\n");
	printf ("\t|  3 - VER OS DESENVOLVEDORES                          |\n");
	printf ("\t*------------------------------------------------------*\n");
	printf ("\tO QUE DESEJA FAZER ? ");                                            
	scanf ("%d",&num);//armazena opo em nivel                    
	
	getchar();
	system("cls");//limpa a tela           
	
	switch (num){
    case 1 :
	{
	
	printf("\n\n\tDIGITE O NOME DOS PARTICIPANTES: ");
    gets(nome);system ("cls"); 
    printf ("\n\tSEJAM BEM VINDOS \"%s\"\n",nome);
    
    printf("\n\n");
    
    printf ("\tEste é o Lig 4. O jogadores deveram escolher,\n");
	printf ("\tdentre as fileiras e em seguida pressionar \"enter\"\n\n");
	printf ("\tPara mais informações, acesse o topo, e veja as intruções no menu do jogo.\n\n");
    	
	printf("\n\tPRESSIONE ENTER PARA COMEAR...");
	getchar();
	system ("cls");//limpa a tela
	// LOOP PARA PREENCHER O TABULEIRO COM '-'
	for ( aux = 0 ; aux < 42 ; aux++ ){
        tabuleiro[aux] = '-';
    }
   
    printf("XOXO LIG4 OXOX !!! \n\n\n\n\n");
   
    printtabuleiro(tabuleiro);

    printf("\n\n");
   
    do{
        jogadorX(tabuleiro);
       
        printtabuleiro(tabuleiro);
       
        printf("\n\n");
       
        for ( aux = 0 ; aux < 42 ; aux++ ){
            if ( tabuleiro[aux] == X )
            {
                if ( tabuleiro[aux] == tabuleiro[aux+1] && tabuleiro[aux+1] == tabuleiro[aux+2] && tabuleiro[aux+2] == tabuleiro[aux+3] )
                {
                    printf("Jogador X venceu, parabens!!");
                    finalizador = 22;
                    break;
                }
                else if ( tabuleiro[aux] == tabuleiro[aux+7] && tabuleiro[aux+7] == tabuleiro[aux+14] && tabuleiro[aux+14] == tabuleiro[aux+21] )
                {
                    printf("Jogador X venceu, parabens!!");
                    finalizador = 22;
                    break;
                }
                else if ( (aux >= 0 && aux <= 3) || (aux >= 7 && aux <= 10) || (aux >= 14 && aux <= 17) )
                {
                    if ( tabuleiro[aux] == tabuleiro[aux+8] && tabuleiro[aux+8] == tabuleiro[aux+16] && tabuleiro[aux+16] == tabuleiro[aux+24] )
                    {
                        printf("Jogador X venceu, parabens!!");
                        finalizador = 22;
                        break;
                    }
                }
                else if ( (aux >= 3 && aux <= 6) || (aux >= 10 && aux <= 13) || (aux >= 17 && aux <= 20) )
                {
                    if ( tabuleiro[aux] == tabuleiro[aux+6] && tabuleiro[aux+6] == tabuleiro[aux+12] && tabuleiro[aux+12] == tabuleiro[aux+18] )
                    {
                        printf("Jogador X venceu, parabens!!");
                        finalizador = 22;
                        break;
                    }
                }
            }
        	
        }
       
        jogadorO(tabuleiro);
       
        printtabuleiro(tabuleiro);
       
        printf("\n\n");
       
        for ( aux = 0 ; aux < 42 ; aux++ ){
          	if ( tabuleiro[aux] == O )
            {
            if ( tabuleiro[aux] == tabuleiro[aux+1] && tabuleiro[aux+1] == tabuleiro[aux+2] && tabuleiro[aux+2] == tabuleiro[aux+3] )
                {
                    printf("Jogador O venceu, parabens!!");
                    finalizador = 22;
                    break;
                }
                else if ( tabuleiro[aux] == tabuleiro[aux+7] && tabuleiro[aux+7] == tabuleiro[aux+14] && tabuleiro[aux+14] == tabuleiro[aux+21] )
                {
                    printf("Jogador O venceu, parabens!!");
                    finalizador = 22;
                    break;
                }
                else if ( (aux >= 0 && aux <= 3) || (aux >= 7 && aux <= 10) || (aux >= 14 && aux <= 17) )
                {
                if ( tabuleiro[aux] == tabuleiro[aux+8] && tabuleiro[aux+8] == tabuleiro[aux+16] && tabuleiro[aux+16] == tabuleiro[aux+24] )
                    {
                        printf("Jogador O venceu, parabens!!");
                        finalizador = 22;
                        break;
                    }
                }
                else if ( (aux >= 3 && aux <= 6) || (aux >= 10 && aux <= 13) || (aux >= 17 && aux <= 20) )
                {
                    if ( tabuleiro[aux] == tabuleiro[aux+6] && tabuleiro[aux+6] == tabuleiro[aux+12] && tabuleiro[aux+12] == tabuleiro[aux+18] )
                    {
                        printf("Jogador O venceu, parabens!!");
                        finalizador = 22;
                        break;
                    }
                }
            }
           
    }
       finalizador++;
       
} 	while ( finalizador < 21 );
	return 0;
}
 
    
    case 2:
    {
    	printf("O jogo funciona da seguinte maneira, o usuário que primeiro alinhar em sequência X ou O, vence.");
    	break;
	}
	
	case 3:
	{
		printf("Desenvolvedores:\nVictor Alef\nDaniel Vieira\nFellyp Matheus");
	
	}
    printf ("\n\n");
    system ("PAUSE");
    return (0);
}
}

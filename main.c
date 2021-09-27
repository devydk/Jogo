#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

const int _pedra = 0;
const int _papel = 1;
const int _tesou = 2;

int main()
{
    int usuario, computador, placar[2]={0,0};
    float porcentagem;
    char c;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    do{
        do{
            printf("\nEscolha: 0-Pedra, 1-Papel, 2-Tesoura (9-Desiste) : ");
            scanf("%d", &usuario);
        }while(usuario!=0 && usuario!=1 && usuario!=2 && usuario!=9);

        if (usuario==9)
        {
            break;
        }

        computador=rand()%3;
        printf("\n");

        if (usuario==_pedra)
        {
            if (computador==_pedra)
            {
                printf("Pedra! Empatamos");
            }
            else if (computador==_papel)
            {
                printf("papel! Eu ganhei");
                placar[1]++;
            }
            else if (computador==_tesou)
            {
                printf("Tesoura! Você ganhou!");
                placar[0]++;
            }
            
            
            

        }
        else if (usuario==_papel)
        {
            if (computador==_pedra)
            {
                printf("Predar! Você ganhou");
                placar[0]++;
            }
            else if (computador==_papel)
            {
                printf("Papel! Empatamos");
            }
            else if (computador==_tesou)
            {
                printf("Tesoura! Eu ganhei");
                placar[1]++;
            }
            
            
            
        }
        else if (usuario==_tesou)
        {
            if (computador==_pedra)
            {
                printf("Pedra! Eu ganhei");
                placar[1]++;
            }
            else if (computador==_papel)
            {
                printf("Tesoura! você ganhou");
                placar[0]++;
            }
            else if (computador==_tesou)
            {
                printf("Tesoura! Empatomos");
            }
            
            
            
        }
        
        
        

        porcentagem= (float) placar[0] / (placar[0]+placar[1]) * 100;
        printf("\nPlacar: %d usuario X computador %d (%.1f%%)", 
        placar[0], placar[1], porcentagem);
        printf("\nTenta de novo? (S/N) ");
        fflush(stdin);
        scanf("%c", &c);
        
    }while(c=='s' || c=='S');
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int M,cont =0,i;
    char acoes[15];
    scanf("%d",&M);
    int * pilha = malloc (M * sizeof( int));        
    while (1){
        
        scanf("%s",acoes);              
        if (acoes[0] == '\0'){
                break;        
        }else{         
            if (cont < M){       
                if (strcmp(acoes,"Empilha") == 0){                                
                    pilha[cont] = cont+1;
                    cont = cont+1;                            
                }
            }else{
                printf("Pilha Cheia\n");
            }
            if (cont > 0){     
                if (strcmp(acoes,"Desempilha") == 0){                
                    pilha[cont] = 0;
                    cont = cont - 1;
                    printf("Desempilha %d\n", cont+1);
                } 
            }else{
                printf("Pilha Vazia\n");
            }
        }              
    }              
        
    return 0;
}
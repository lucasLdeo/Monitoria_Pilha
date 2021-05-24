#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int M,cont =0, valor=0, i;
    char acoes[15];
    scanf("%d",&M);
    int * pilha = malloc (M * sizeof( int));    
    printf("%d",sizeof(pilha));
    while (sizeof(pilha)< M){
        scanf("%s",acoes);              
        if (acoes[0] == '\0'){
                break;        
        }else{    
            if (strcmp(acoes,"Empilha") == 0){                                
                pilha[cont] = cont+1;
                cont = cont+1;                
            }     
            if (strcmp(acoes,"Desempilha") == 0){                
                pilha[cont] = 0;
                cont = cont - 1;
            } 
        }
        printf("Pilha: ");
            for(i = 0; i< cont; i++){
                printf("%d ",pilha[i]);
            }                        
        printf("\n");
        }              
        
    return 0;
}
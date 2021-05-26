#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int M;
    char acoes[15], tad [10];
    scanf("%s",tad);
    scanf("%d",&M);

    if (strcmp(tad,"Pilha")== 0){
        int cont =0,cont_remove =0, cont_num = 0;
        int * pilha = malloc (M * sizeof( int));        
        while (1){
            
            scanf("%s",acoes);              
            if (strcmp(acoes,"Sair") == 0){
                    break;        
            }else{
                if (strcmp(acoes,"INSERE") == 0){           
                    if (cont < M){ 
                        int valor=0;
                        scanf("%d",&valor);                                                      
                        pilha[cont] = valor;
                        cont_num = cont_num + 1;
                        cont = cont+1;                            
                    }else{
                        printf("Pilha Cheia\n");
                    }
                }else{
                    if (strcmp(acoes,"REMOVE") == 0){ 
                        if (cont > 0){                                         
                            printf("Desempilha %d\n", pilha[cont-1]);
                            cont = cont - 1;
                            pilha[cont] = 0;
                            
                            
                        }else{
                            printf("Pilha Vazia\n");
                        }
                    }
                }
            }
        }                          
    }else{
        if(strcmp(tad,"Fila")== 0){
            int cont =0,cont_remove =0,cont_num=0;
            int * fila = malloc (M * sizeof( int)); 
            while (1){            
            scanf("%s",acoes);              
            if (strcmp(acoes,"Sair") == 0){
                    break;        
            }else{         
                if (strcmp(acoes,"INSERE") == 0){   
                    int valor=0;
                    scanf("%d",&valor);
                    if (cont < M && fila[cont] == 0){                                                       
                        fila[cont] = valor;
                        cont_num = cont_num +1;
                        cont = cont+1;                            
                    }else{                                        
                        if (cont == M && fila[0]== 0){
                            cont = 0;
                            fila[cont] = valor;
                            cont_num = cont_num +1;
                            cont = cont+1;                      
                            
                        }else{
                            printf("Fila Cheia\n");
                        }
                    }                    
                }else{
                    if (strcmp(acoes,"REMOVE") == 0){
                       
                        if (cont_remove== M && fila[0]!= 0){  
                            cont_remove = 0;
                            printf("Remove  %d\n", fila[cont_remove]);                           
                            fila[cont_remove] = 0; 
                            cont_remove = cont_remove + 1; 

                        }else{   
                            if (cont_remove < M && fila[cont_remove] != 0){                                       
                                printf("Remove  %d\n", fila[cont_remove]);         
                                fila[cont_remove] = 0; 
                                cont_remove = cont_remove + 1;                        
                            }else{
                                printf("Fila Vazia\n");
                            }
                        }
                    }
                }                                                                    
            }              
        }
        }else{
            printf("Operacao nao reconhecida");
        }
    }                   
    return 0;
}
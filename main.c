#include <stdio.h>
#include <stdlib.h>

        #define TAMANHO 10

        int vetor[TAMANHO];
        int vagas = TAMANHO;


        int hash(int chave){

            int vetor[8];

            for(int i=0;i<8;i++){
                vetor[7-i] = chave%10;
                chave= chave/10;
            }


            vetor[4] = (vetor[3]+vetor[4])%10;
            vetor[5] = (vetor[2]+vetor[5])%10;
            vetor[6] = (vetor[1]+vetor[6])%10;
            vetor[7] = (vetor[0]+vetor[7])%10;

            vetor[6] = (vetor[6]+vetor[5])%10;
            vetor[7] = (vetor[7]+vetor[4])%10;

            return chave = (vetor[6]*10)+vetor[7];
        }

        int hash2(int chave){
            return chave%TAMANHO;
        }
          // insere numeros
        void inserir(int chave, int posicao){
            if(vagas==0){
              return;
            }
            if(posicao==100) {
                    posicao = 0;
            }

          //  if(vetor[posicao] != NULL) inserir(chave,hash2(chave));
            if(vetor[posicao] != 0){
               inserir(chave,hash2(chave));
            }


            else{
             vetor[posicao] = chave;
            }
            return;
        }
                // insere letras
             void inserirTexto(char chave, int posicao){
            if(vagas==0){
              return;
            }
            if(posicao==100) {
                    posicao = 0;
            }

          //  if(vetor[posicao] != NULL) inserir(chave,hash2(chave));
            if(vetor[posicao] != 0){
               inserir(chave,hash2(chave));
            }


            else{
             vetor[posicao] = chave;
            }
            return;
        }


          int main()
        {

            for(int i=0;i<TAMANHO;i++){
                vetor[i]= 0;
            }
          // imprime numeros
            inserir(1,hash(0));
            inserir(2,hash(1));
            inserir(3,hash(2));
            inserir(4,hash(3));
            inserir(5,hash(4));
            inserir(6,hash(5));
            inserir(7,hash(6));
            inserir(8,hash(7));
            inserir(9,hash(8));
            inserir(10, hash(9));


            for(int i=0;i<TAMANHO;i++){
            printf("CHAVE%d: %d Posicao VETOR[%d]\n",i,vetor[i],i);
            }
            printf("\n");
            printf("\n");
            // imprime letras

          /*   inserirTexto('a',hash(0));
             inserirTexto('b',hash(1));
             inserirTexto('c',hash(2));
             inserirTexto('d',hash(3));
             inserirTexto('e',hash(4));
             inserirTexto('f',hash(5));
             inserirTexto('g',hash(6));
             inserirTexto('h',hash(7));
             inserirTexto('i',hash(8));
             inserirTexto('j',hash(9));

               // imprime letras
              for(int i=0;i<TAMANHO;i++){
            printf("CHAVE%d: %c Posicao VETOR[%d]\n",i,vetor[i],i);
            }  */

            return 0;


        }


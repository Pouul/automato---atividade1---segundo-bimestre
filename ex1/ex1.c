#include <stdio.h>
#include <stdlib.h>

char *entrada = "+*aba";

void E(){
    switch(*entrada){// testa o in´ıcio da palavra
        case '+':
            entrada++; // consome a (deriva a)
            E(); // chama o terminal E()
            E();
            break;
        case '*':
            entrada++; // consome b (deriva b)
            E(); // chama o terminal A()
            E();
            break;
        case 'a':
            entrada++;
            break;
        case 'b':
            entrada++;
            break;
        default:
            printf("\nerro.");
            exit(1); // finaliza o programa
    }
}

int main(){
    printf("analisando a entrada %s\n",entrada);
    E(); // s´ımbolo inicial a gram´atica
    // se chegou ao final da palavra, sem erro,
    // a palavra pertence `a linguagem gerada pela gram´atica.
    if( *entrada == '\x0')// fim de entrada
    printf("\npalavra pertence \n");
    else
    printf("\nerro.");
    printf("\nfim de programa.\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

char *entrada = "bcabcbb";

void A();
void B();
void C();
void D();

void A(){
    switch(*entrada){// testa o in´ıcio da palavra
        case 'b':
            entrada++; // consome a (deriva a)
            B(); // chama o terminal E()
            if (*entrada == 'b'){
                entrada++;
                break;
            }
            else{
                printf("palavra não pertence\n");
            }
        default:
            printf("\nerro no A");
            exit(1); // finaliza o programa
    }
}

void B(){
    switch(*entrada){// testa o in´ıcio da palavra
        case 'c':
            entrada++; // consome a (deriva a)
            C(); // chama o terminal E()
            break;
        case 'e':
            entrada++;
            D();
            break;
        default:
            printf("\nerro no B");
            exit(1); // finaliza o programa
    }
}
void D(){
    switch(*entrada){// testa o in´ıcio da palavra
        case 'd':
            entrada++; // consome a (deriva a)
            if (*entrada == 'a'){
                entrada++;
                break;
            }
            else{
                printf("palavra não pertence\n");
            }
        
        default:
            printf("\nerro no D");
            exit(1); // finaliza o programa
    }
}

void C(){
    switch(*entrada){// testa o in´ıcio da palavra
        case 'a':
            entrada++; // consome a (deriva a)
            A(); // chama o terminal E()
            break;
        default:
            break;
    }
}

int main(){
    printf("analisando a entrada %s\n",entrada);
    A(); // s´ımbolo inicial a gram´atica
    // se chegou ao final da palavra, sem erro,
    // a palavra pertence `a linguagem gerada pela gram´atica.
    if( *entrada == '\x0')// fim de entrada
    printf("\npalavra pertence \n");
    else
    printf("\nerro.");
    printf("\nfim de programa.\n");
    return 0;
}
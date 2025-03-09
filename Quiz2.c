#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


int perg1 = 2, perg2 = 2, perg3 = 2, perg4 = 2, perg5 = 2, acertos = 0, erros = 0; // variaveis globais

void pergunta01(){   // função para ler as perguntas e a opção do usuário
    system("cls");
    printf("1 - Messi jogou pelo Barcelona durante toda a sua carreira profissional?\n");
    printf("0 - Falso \n1 - Verdadeiro\n");
    scanf("%d", &perg1);
    getchar();
    system("cls");
 
}

void pergunta02(){   // função para ler as perguntas e a opção do usuário
    system("cls");
    printf("2 - Messi nunca ganhou a Copa do Mundo da FIFA?\n");
    printf("0 - Falso \n1 - Verdadeiro\n");
    scanf("%d", &perg2);
    getchar();
    system("cls");

}

void pergunta03(){   // função para ler as perguntas e a opção do usuário
    system("cls");
    printf("3 - Messi é o maior artilheiro da história do Barcelona?\n");
    printf("0 - Falso \n1 - Verdadeiro\n");
    scanf("%d", &perg3);
    getchar();
    system("cls");
    
}

void pergunta04(){   // função para ler as perguntas e a opção do usuário
    system("cls");
    printf("4 - Messi ganhou a Bola de Ouro sete vezes?\n");
    printf("0 - Falso \n1 - Verdadeiro\n");
    scanf("%d", &perg4);
    getchar();
    system("cls");

}

void pergunta05(){   // função para ler as perguntas e a opção do usuário  
    system("cls"); 
    printf("5 - Messi nasceu na Espanha?\n");
    printf("0 - Falso \n1 - Verdadeiro\n");
    scanf("%d", &perg5);
    getchar();
    system("cls");

}


void respostas(){    // Função verifica as respostas escolhidas
    system("cls");
    if (perg1 == 1 || perg1 == 0){        // Verifica se o quiz já foi respondido
        printf("1 - Messi jogou pelo Barcelona durante toda a sua carreira profissional?\n");
        if (perg1 == 0){
            printf("Voce acertou\n");
            acertos++;
        } else {
            printf("Voce errou\n");
            erros++;
        }

        printf("2 - Messi nunca ganhou a Copa do Mundo da FIFA?\n");
        if (perg2 == 1) {
            printf("Voce errou\n");
            erros++;
        } else {
            printf("Voce acertou\n");
            acertos++;
        }

        printf("3 - Messi é o maior artilheiro da história do Barcelona?\n");
        if (perg3 == 1){
            printf("Voce acertou\n");
            acertos++;
        } else {
            printf("Voce errou\n");
            erros++;
        }

        printf("4 - Messi ganhou a Bola de Ouro sete vezes?\n");
        if (perg4 == 1){
            printf("Voce acertou\n");
            acertos++;
        } else {
            printf("Voce errou\n");
            erros++;
        }

        printf("5 - Messi nasceu na Espanha?\n");
        if (perg5 == 0){
            printf("Voce acertou\n");
            acertos++;
        } else {
            printf("Voce errou\n");
            erros++;
        }

        printf("Acertos: %d\n", acertos);
        printf("Erros: %d\n", erros);
        system("pause");
    } else {
        printf("Voce nao respondeu o quiz\n");
    }
        getchar();
}

void limparresp(){      //  Função para limpar as respostas
    system("cls");
    if (perg1 != 0 &&  perg1 != 1){ // Verifica se o quiz já foi respondido
        printf("Nao existem respostas para limpar\n");
        getchar();
    } else {
        perg1 = 2, perg2 = 2, perg3 = 2, perg4 = 2, perg5 = 2;
        acertos = 0;
        erros = 0;
        printf("Voce apagou as respostas anteriores\n");
        getchar();    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opc;
    do {
        system("cls");
        
        printf("===== Menu =====\n");
        printf("1 - Iniciar quiz\n");
        printf("2 - Ver respostas \n");
        printf("3 - Limpar respostas\n");
        printf("4 - Sair\n");
        printf("===============\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opc);
        getchar();

        if (opc > 4 || opc < 1){        // Verifica se a opção escolhida é válida
            system("cls");
            printf("Opcao invalida\n");
            getchar();
        }

        switch(opc){
            case 1:
                pergunta01();    // puxa a função das perguntas
                pergunta02();
                pergunta03();
                pergunta04();
                pergunta05();
                break;
            case 2:
                respostas(); // puxa a função das respostas
                break;
            case 3:
                limparresp(); // puxa a função para limpar as respostas
                break;
            case 4:
                printf("Voce saiu do programa\n"); // Sai do programa
                Sleep(10);
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while(opc != 4);

    return 0;
}
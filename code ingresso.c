#include <stdio.h>

int main() {
    int numero; //numero do filme
    int quantidade; //quantidade de ingresso
    float valor_total = 0; //valor total dos ingressos
    int idade; //idade de quem vai assistir
    
    printf("Por favor selecione um filme:\n");
    printf("Opção 1: É assim que acaba\n");
    printf("Opção 2: Deadpool e Wolverine\n");
    printf("Opção 3: Divertidamente 2\n");
    printf("Opção 4: Armadilha\n");
    //mostrar no command line os filmes para assistir
    
    scanf("%d", &numero);  // coletar numero do filme
    
    printf("Por favor, informe quantos ingressos:\n"); //solicitar numero de ingressos
    scanf("%d", &quantidade);  //coletar numero de ingressos
    

    //a seguir um for para a quantidade de numero de ingressos para poder especificar idade de cada
    for (int i = 1; i <= quantidade; i++) { 
        printf("Por favor, informe a idade para o ingresso %d:\n", i);
        scanf("%d", &idade);  

        //a seguir um if para fazer os valores de acordo com as idades 
        if (idade > 10 && idade < 65) {
            valor_total += 30.50;
        } else {
            valor_total += 15.25;
        }
    }
    
    //switch case para printar qual filme escolhido e quanto custou
    switch(numero) {
        case 1:
            printf("%d ingressos para o filme 'É assim que acaba'. Total: R$ %.2f\n", quantidade, valor_total);
            break;
        case 2:
            printf("%d ingressos para o filme 'Deadpool e Wolverine'. Total: R$ %.2f\n", quantidade, valor_total);
            break;
        case 3:
            printf("%d ingressos para o filme 'Divertidamente 2'. Total: R$ %.2f\n", quantidade, valor_total);
            break;
        case 4:
            printf("%d ingressos para o filme 'Armadilha'. Total: R$ %.2f\n", quantidade, valor_total);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;  
    }

    return 0;  //terminar o programa
}
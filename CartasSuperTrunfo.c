#include <stdio.h>   
#include <locale.h>



int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    //tentando fazer com que o console do vs code leia os caracteres com acento, aqui funcionou só na primeira vez

    char estado[50];          
    char codigo_carta[5];     
    char cidade[100];        
    int populacao;           
    int pontos_turisticos;   
    float pib;              
    float area; 
    //declaração das variáveis

    printf("--- Cadastro de Carta de Jogo ---\n\n");

    
    printf("Digite o Estado Brasileiro: ");
    scanf("%s", estado);

    
    printf("Digite o Código da Carta (ex: a01, h04): ");
    scanf("%s", codigo_carta);

 
    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf("%s", cidade);

    
    printf("Digite a Quantidade de População (apenas numeros inteiros): ");
    scanf("%d%*c", &populacao);

    
    printf("Digite a Quantidade de Pontos Turísticos (apenas numeros inteiros): "); 
    scanf("%d%*c", &pontos_turisticos);

    
    printf("Digite o PIB da Cidade (ex: 12345.67): ");
    scanf("%f%*c", &pib);

   
    printf("Digite a Área da Cidade em km² (ex: 500.25): ");
    scanf("%f%*c", &area);

    //coleta de dados do usuário do cadastro da carta

    printf("\n--- Informacoes da Carta Cadastrada ---\n");
    printf("Estado Brasileiro: %s\n", estado);
    printf("Codigo da Carta: %s\n", &codigo_carta);
    printf("Cidade: %s\n", &cidade);
    printf("Populacao: %d habitantes\n", &populacao);
    printf("Pontos Turisticos: %d\n", &pontos_turisticos);
    printf("PIB da Cidade: R$ %.2f\n", &pib); 
    printf("Area da Cidade: %.2f km²\n", &area);
    
    //printando no console o cadastro da primeira carta
    printf("\n--Próxima Carta--\n");

    printf("--- Cadastro de Carta de Jogo ---\n\n");

    //iniciando a coleta da segunda carta

    
    printf("Digite o Estado Brasileiro: ");
    scanf("%s", &estado);

    
    printf("Digite o Código da Carta (ex: a01, h04): ");
    scanf("%s", &codigo_carta);

 
    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf("%s", &cidade);

    
    printf("Digite a Quantidade de População (apenas numeros inteiros): ");   
    scanf("%d%*c", &populacao);

    
    printf("Digite a Quantidade de Pontos Turísticos (apenas numeros inteiros): ");
    scanf("%d%*c", &pontos_turisticos);

    
    printf("Digite o PIB da Cidade (ex: 12345.67): ");
    scanf("%f%*c", &pib);

   
    printf("Digite a Área da Cidade em km² (ex: 500.25): ");
    scanf("%f%*c", &area);

    //fim da coleta da segunda carta

    printf("\n--- Informacoes da Carta Cadastrada ---\n");
    printf("Estado Brasileiro: %s\n", &estado);
    printf("Codigo da Carta: %s\n", &codigo_carta);
    printf("Cidade: %s\n", &cidade);
    printf("Populacao: %d habitantes\n", &populacao);
    printf("Pontos Turisticos: %d\n", &pontos_turisticos);
    printf("PIB da Cidade: R$ %.2f\n", &pib); 
    printf("Area da Cidade: %.2f km²\n", &area); 

    //printando no console os dados da segunda carta
  
    return 0; 
    //testando como aprendi inclusive com as dicas de dois pontos após o ponto, o programa saiu assim, usando apenas o conhecimento desse modo, no meu console ele não leu corretamente, já vi uma solução mas usa algumas coisas que ainda não como usar direito mesmo assim eu testei e deu certo, com esse código no meu console do VS code não funcionou totalmente correto.
}

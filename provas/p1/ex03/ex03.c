#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência a porcentagem>>>>
// check:<<<erro: e3.1c: A função deve retornar um valor inteiro conforme tabela do enunciado>>>>
// check:<<<erro: e3.2: Faltou testar os valores inválidos dentro da função / teste errado / faltou alguns testes>>>>
float calculaLucro(float compra, float venda){
    float lucroPercent;
// check:<<<erro: e3.3: Cálculo com erros (não corresponde a porcentagem pedida OU erro na fórmula OU porcentagem baseada na venda e não na compra OU divisão inteira )>>>>    lucroPercent = (venda-compra)*10;
    return lucroPercent;
 // check:<<<erro: não fez os IF para testes>>>>
}
int main(){

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   
    float compra, venda;
    float lucro;
    printf("Digite o preco de compra: ");
    scanf("%f", &compra);
    printf("Digite o preco de venda: ");
    scanf("%f", &venda);
    lucro = calculaLucro(compra, venda);

// check:<<<erro: e3.5a: Não mostrou a porcentagem>>>>
// check:<<<erro: e3.6: e3.6: Chamada de função com erros (parâmetro de entrada e/ou saída) ou faltando a passagem por referência>>>>

    if(lucro<0){
        printf("Prejuízo de %.f%%\n", lucro*-1);
    } else if(lucro>0 && lucro <= 20){
        printf("Lucro pequeno de %.f%%\n", lucro);
    } else if(lucro>=20 && lucro<=40){
        printf("Lucro bom de %.f%%\n", lucro);
    } else if(lucro>40){
        printf("Lucro alto de %.f%%\n", lucro);
    } else{
        printf("Valor inválido!\n", lucro);
    }

    
   
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}
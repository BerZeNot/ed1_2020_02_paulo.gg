#include <stdio.h>

struct eletrodomestico{
  char nome[15];
  float potencial;
  float tempoAtivo_dia;
};

void readData(struct eletrodomestico *eletrodoms){
  for(int i=0; i<5; i++){
    printf("\nInforme os dados do %dº eletrodomestico: \n", i+1);
    setbuf(stdin, NULL);
    printf("Nome: ");
    gets(eletrodoms[i].nome);
    printf("Potencia: ");
    scanf("%f", &eletrodoms[i].potencial);
    printf("Tempo ativo por dia: ");
    scanf("%f", &eletrodoms[i].tempoAtivo_dia);
  }
}

float calculateConsumption(struct eletrodomestico *eletrodoms, float *daysUsing){
  float consumption=0;
  for(int i=0; i<5; i++){
    consumption += (eletrodoms[i].potencial * eletrodoms[i].tempoAtivo_dia);
  }
  return consumption*(*daysUsing);
}

int main(){
    printf("<< Controle de Consumo de Energia >>\n");
    struct eletrodomestico eletrodoms[5];
    float totalConsumption, daysUsing;
    readData(&eletrodoms);
    printf("\nInforme um valor de tempo (em dia): ");
    scanf("%f", &daysUsing);
    totalConsumption = calculateConsumption(&eletrodoms, &daysUsing);
    printf("Consumo total: %.0f KW\n", totalConsumption);
    printf("Consumo relativo:\n");
    for(int i=0; i<5; i++){
      float relativeConsumption=0;
      relativeConsumption = ((eletrodoms[i].potencial*eletrodoms[i].tempoAtivo_dia*daysUsing)/totalConsumption)*100;
      printf("%s %.1f%%\n", eletrodoms[i].nome, relativeConsumption);
    }
    return 0;
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%
-------------------------------------------------------------------------------
*/
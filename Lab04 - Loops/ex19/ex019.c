#include <stdio.h>

int main(){
    int anosGastos = 0; // anos gastos para Carlso ter mais dinheiros que José;
    float montanteCarlos = 25000.0, 
        montanteJose = 50000.0,
        economiaCarlos = 3000.0, 
        economiaJose = 800.0; 

    while(montanteJose > montanteCarlos){
        montanteCarlos += economiaCarlos * 12;
        montanteJose += economiaJose * 12;
        anosGastos++;
        printf("loop %d\n", anosGastos);
    }

    printf("<< Tempo para Carlos ter mais dinheiro que José >>\n");
    printf("Carlos terá mais dinhero que José em %d ano(s)\n\n", anosGastos);
    printf("Economias de Carlos após %d ano(s): R$ %.2f\n", anosGastos, montanteCarlos);
    printf("Economias de José após %d ano(s): R$ %.2f\n", anosGastos, montanteJose);
    return 0;
}

/*
    José possui no banco R$50.000,00 e Carlos R$ 25.000,00. 
    Carlos poupa R$ 3.000,00 por mês, enquanto que o José 
    poupa R$800,00. Quantos anos levarão para que o Carlos 
    fique com mais dinheiro que o José? Faça um algoritmo 
    para mostrar esse cálculo.
*/
#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, x1, x2, delta=0;
    printf("<< Raízes da equação de segundo grau >>\n");
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    delta = pow(b,2) - (4*a*c);
    x1 = (-b + (sqrt(delta))) / 2*a;
    x2 = (-b - (sqrt(delta))) / 2*a;
    printf("Delta: %f\n", delta);
    printf("Raiz 1 = %.2f Raiz 2 = %.2f\n", x1, x2);
}

/*
    Determinar as raízes, reais ou complexas, de uma equação de segundo grau.
*/
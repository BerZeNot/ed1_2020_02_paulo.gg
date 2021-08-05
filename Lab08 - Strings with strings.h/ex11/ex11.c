#include <stdio.h> 
#include <string.h> 
int main(void){ 
    char buff[5];     
    int pass = 0;     
    printf("\nEntre com a senha : \n"); 
    gets(buff);     
    if (strcmp(buff, "1234")) {
        printf ("\nSenha Errada \n");     
    } else { 
        printf("\nSenha Correta \n");
        pass = 1;
    }
    
    if (pass){ /* O usuário acertou a senha, poderá continuar*/        
        printf ("\nAcesso liberado \n");
    } else {
        printf("\nAcesso negado \n");
    }    
    return 0; 
}

/*
a) Qual é a função do programa?
A função do programa é autenticar um usuário, solicitando uma senha
confirmando se a senha está de acordo com a senha registrada no sistema;

b) Qual a saída quando a senha correta é digitada (senha correta: 1234)
A saída é: Acessi liberado;

c) Qual a saída para as seguintes senhas 
    a.123 -> Acesso negado;
    b.12345 -> Acesso negado;
    c.123456 -> 
        Acesso negado
        *** stack smashing detected ***: terminated

d) Em quais casos o programa obteve um comportamento inválido. Explique o motivo.
O programa obteve comportamento inválido no caso em que a entrada foi "123456". 
Isso aconteceu pois a entrada tinha um tamanho maior do que o vetor suportava.
Esse erro também acontecerá para todas as entradas que excederem o tamanho declarado
para o vetor (nesse caso, tamanho > 5);
*/
#include <stdio.h> 
#include <string.h> 
int main(void){ 
    char buff[5];     
    int pass = 0;     
    printf("\nEntre com a senha: "); 
    fgets(buff,5,stdin);
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
a)Pense em uma solução para o problema do exercício 11 que utiliza fgets. 
Considere que o tamanho máximo de uma senha são 4 dígitos.

b)Teste com os seguintes valores
a.123 -> acesso negado
b.12345 -> acesso liberado
c.123456 -> acesso liberado

Utilizando o fgets nessa implementação e usando um vetor de 5 posições,
a função irá receber apenas os 4 caracteres (máximo que foi estabelecido)
e ignorará o resto dos caracteres. Se a sequência dos 4 primeiros dígitos
estiverem certos, a estrutura condicional decidirá que a senha está correta
e mostrará a mensagem de acesso liberado.
*/
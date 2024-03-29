/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

*/

int remove_intervalo_lista(Lista *li, int posI, int posF){
    if(li == NULL)
        return -1;
    if(posI <= 0 || posF <=0)
        return -1;
    if(posI > li->qtd || posF > li->qtd)
        return -1;
    if(posF < posI)
        return -1;

    int qtdToRemove = posF - (posI-1);
    // check:<<<erro: e2.3b: invade a memória (por exemplo se remover os últimos elementos) - não limitou à quantidade de elementos na lista>>>>
    for(int i=posI-1; i < li->qtd; i++){
        li->dados[i] = li->dados[i+qtdToRemove];
    }
    li->qtd = li->qtd - qtdToRemove;
    return 0;
}
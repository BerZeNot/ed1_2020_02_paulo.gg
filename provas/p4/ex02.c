/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
(a) mostrar como fica a estrutura do TAD
<< Resposta >>

struct listCirc_Node{
    struct student *data;
    listCirc_Node *next;
}

struct ListCirc{
    listCirc_Node *head;
    listCirc_Node *last_head;
}

(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

int listCirc_getNext(ListCirc *lc, struct student *std){
    if(lc == NULL)
        return INVALID_NULL_POINTER; //  INVALID_NULL_POINTER = -1

    else {
        if(lc->head.next == NULL){
            std = lc->head.data;
            return SUCCESS; // SUCCESS = 0
        } else {
            std = lc->head->next.data;
            lc->last_head = lc->head;
            lc->head = lc->head->next;
            return SUCCESS; // SUCCESS = 0
        }
    }
}

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?
// responder aqui:
    
    O vetor de acesso circular de uma fila estática não tem de fato o último 
    elemento ligado ao primeiro. A estrutura de dados implementa uma forma de
    guardar informações sobre quais as próximas posições livres do vetor para 
    colocar novos dados e também a informação de posição do próximo elemento a
    ser retirado da fila. 

    Já a lista circular guarda em seu nó descritor quem é o primeiro elemento da
    lista e o último elemento da lista guarda em seu nó descritor informações sobre
    o próximo elemento (que no caso é a cabeça da lista). Assim, o últim elemento 
    sempre apontará para a cabeça da lista.
*/
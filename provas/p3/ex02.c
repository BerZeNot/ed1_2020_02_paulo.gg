/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente
encadeada de alunos (a lista usada na prática 16 – copiar o código da 
SUA PRÁTICA)

Implemente uma função chamada concat3, cuja funcionalidade é concatenar 
(juntar) 3 listas. Seu cabeçalho é o seguinte:

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos)

pre  - lista a ser concatenada e que vai ficar no início (antes de /in/). 
      É também a lista de destino final (lista que receberá a concatenação 
      de todas as listas).  
in – lista a ser concatenada e que vai ficar entre as listas /pre/ e /pos/. 
pos – lista a ser concatenada no final (depois de /in/) 

Retorno da função: 0 para sucesso; -1 para qualquer tipo de erro
Na implementação do list_concat3, *nenhum elemento é copiado ou movido*,
somente os ponteiros internos das três listas são rearranjados.
Após a concatenação, as listas continuarão existindo, no entanto,
as listas in e pos ficarão sem elementos (vazia). 
O resultado final da concatenação ficará na lista /pre/.  

Saída concatenada (armazenada em \pre\):
pre <-> in <-> pos
*/

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos){
    if(pre == NULL || in == NULL || pos == NULL)
        return INVALID_NULL_POINTER;
    if(pre->size == 0 && in->size == 0 && pos->size == 0){
        return SUCCESS;
    } else if(pre->size == 0){
        pre->begin = in->begin;
        pre->end = in->begin;
        in->end->next = pos->begin;// check:<<<erro: cuidado nos testes pois /in/ pode ser vazia e aqui pode ocorrer um erro>>>>
        pos->begin->prev = in->end;
        free(in);// check:<<<erro: não é para liberar as outras listas, é pra deixar vazia>>>>
        free(pos);// check:<<<erro: e2.2 faltou modificar o tamanho final das listas>>>>

    } else if(in->size == 0){
        pre->end->next = pos->begin;
        pos->begin->prev = pre->end;
        free(in);
        free(pos);
    } else if(pos->size == 0){
        pre->end->next = in->begin;
        in->begin->prev = pre->end;
        free(in);
        free(pos);
    } else {
        pre->end->next = in->begin;
        in->begin->prev = pre->end;
        in->end->next = pos->begin;
        pos->begin->prev = in->end;
        free(in);
        free(pos);
    }
    return SUCCESS;
}
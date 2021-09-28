#define SUCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct student{
    int registration;
    char name[30];
    float n1, n2, n3;
};

typedef struct TDLinkedList TDLinkedList;

// Create the list; OK
TDLinkedList* list_create();

// Frees the list; Missing implementation;
int list_free(TDLinkedList *list);

// Inserts an element on list begin; OK
int list_push_front(TDLinkedList *list, struct student al);

// Inserts an element on list end; OK
int list_push_back(TDLinkedList *list, struct student al);

// Prints the list from begin to end; OK
int list_print_foward(TDLinkedList *list);

// Returns the list size; OK
int list_size(TDLinkedList *list);
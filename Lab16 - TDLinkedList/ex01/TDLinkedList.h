#define SUCCESS 0
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

// Frees the list; Missing implementation; OK
int list_free(TDLinkedList *list);

// Inserts an element on list begin; OK
int list_push_front(TDLinkedList *list, struct student al);

// Inserts an element on list end; OK
int list_push_back(TDLinkedList *list, struct student al);

// Removes an element from list begin; OK
int list_pop_front(TDLinkedList *list);

// Removes an element from list end; OK
int list_pop_back(TDLinkedList *list);

// Erases an element at position pos from list; OK
int list_erase(TDLinkedList *list, int pos);

// Finds the element at position pos and change the pointer *al to result; OK
int list_find_pos(TDLinkedList *list, int pos, struct student *al);

// Finds the element with registration nmat and change the pointer *al to result; OK
int list_find_mat(TDLinkedList *list, int nmat, struct student *al);

// Gets the first element from list; OK
int list_front(TDLinkedList *list, struct student *al);

// Gets the last element at list; OK
int list_back(TDLinkedList *list, struct student *al);

// Gets the position where nmat is. OK
int list_get_pos(TDLinkedList *list, int nmat, int *pos);

// Prints the list from begin to end; OK
int list_print_foward(TDLinkedList *list);

// Prints the list from end to begin; OK
int list_print_reverse(TDLinkedList *list);

// Returns the list size; OK
int list_size(TDLinkedList *list);
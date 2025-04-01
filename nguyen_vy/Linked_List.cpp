// Linked_List.c
#include "Linked_List.h"

//1. Create: t?o ra ??i t??ng linked list
//- input : linked_list_t * -??a ch? ??i t??ng linked_list ???c t?o
//- output : void
void Create(linked_list_t* list) {
    list->last_node = NULL;
    list->len = 0;
}

//2. GetLen: l?y s? l??ng node trong linked lisst
//- input : linked_list_t * ??a ch? ??i t??ng linked_list c?n GetLen
//- Output : int
int GetLen(linked_list_t* list) {
    return list->len;
}

//3. Add: th�m m?t node v�o cu?i linked_list
//- Input :
//    *linked_list_t * -??a ch? ??i t??ng linked list.C�i m� ch�ng ta s? add node v�o ?�
//    * int - gi� tr? c?a node ???c add v�o
//    - Output : void
void Add(linked_list_t* list, int value) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if (!new_node) return;
    new_node->value = value;
    new_node->previous_node = list->last_node;
    list->last_node = new_node;
    list->len++;
}

//4. Insert: ch�n node v�o lined list ? v? tr� index
//- input :
//    *linked_list_t * ??a c?a ??i t??ng linked lisst, m� ta s? insert ??i t??ng v�o
//    * int value : gi� tr? c?a node.
//    * int index : v? tr� node ???c insert v�o.
//    - Output : void
void Insert(linked_list_t* list, int value, int index) {
    if (index < 0 || index > list->len) return;

    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if (!new_node) return;
    new_node->value = value;

    if (index == 0) {
        new_node->previous_node = NULL;
    }
    else {
        node_t* temp = list->last_node;
        for (int i = list->len - 1; i > index; i--) {
            temp = temp->previous_node;
        }
        new_node->previous_node = temp->previous_node;
        temp->previous_node = new_node;
    }

    list->len++;
}

//5. Remove: xo� m?t node ? v? tr� cu?i c�ng trong linked list
//- input : linked_list_t * ??a ch? c?a ??i t??ng linked list, m� ta mu?n xo� node ? trong nos
//- output : void
void Remove(linked_list_t* list) {
    if (list->len == 0) return;

    node_t* temp = list->last_node;
    list->last_node = temp->previous_node;
    free(temp);
    list->len--;
}

//6. RemoveIndex: xo� m?t node ? v? tr� index
//- Input :
//    *linked_list_t * : ??a ch? c?a linked_l�st, m� ta mu?n xo� node trong nos
//    * int index : v? tr� c?a node mu?n xo�
void RemoveIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) return;

    node_t* temp = list->last_node;
    node_t* prev = NULL;
    for (int i = list->len - 1; i > index; i--) {
        prev = temp;
        temp = temp->previous_node;
    }

    if (prev) prev->previous_node = temp->previous_node;
    free(temp);
    list->len--;
}

//7. Search: t�m ki?m v? tr� c?a node theo gi� tr?
//- Input :
//    *linked_list_t * : ??a ch? c?a linked l�st m� ch�ng ta c?n t�m ki?m
//    * int value : gi� tr? c?a node m� ch�ng ta mu?n t�m ki?m
//    - Ouput : int : v? tr� c?a node ???c t�m th?y, -1 n?u kh�ng t�m th?y b?t k? node v�o c� gi� tr? value.
int Search(linked_list_t* list, int value) {
    node_t* temp = list->last_node;
    int index = list->len - 1;
    while (temp) {
        if (temp->value == value) return index;
        temp = temp->previous_node;
        index--;
    }
    return -1;
}

//8. GetValue: l?y gi� tr? c?a node ? v? tr� cu?i c�ng
//- Input :
//    *linked_list_t * : ??a ch? c?a linked list c�i m� ch�ng ta s? ?i ??c node trong ?�.
//    - Ouput : int : gi� tr? c?a node
int GetValue(linked_list_t* list) {
    return (list->last_node) ? list->last_node->value : -1;
}

//9. GetValueIndex: l?y gi� tr? c?a node ? v? tr� index
//- Input :
//    *linked_list_t * : ??a c?a c?a linked list c�i m� ch�ng ta s? ?i ??c gi� tr? c?a node ? v? tr� index
//    * int index : v? tr� c?a node ch�ng ta mu?n ??c
//    - Ouput : int : gi� tr? c?a node m� ch�ng ta ??c ???c
int GetValueIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) return -1;

    node_t* temp = list->last_node;
    for (int i = list->len - 1; i > index; i--) {
        temp = temp->previous_node;
    }
    return temp->value;
}

//10. DeleteAll: xo� t?t c? node trong linked lisst
//- Input : linked_list_t * : ??a ch? c?a linked list c�i m� ch�ng ta mu?n xo� h?t t?t c? node c?a nos
//- Output : void
void DeleteAll(linked_list_t* list) {
    while (list->len > 0) {
        Remove(list);
    }
}

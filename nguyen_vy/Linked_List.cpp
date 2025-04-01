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

//3. Add: thêm m?t node vào cu?i linked_list
//- Input :
//    *linked_list_t * -??a ch? ??i t??ng linked list.Cái mà chúng ta s? add node vào ?ó
//    * int - giá tr? c?a node ???c add vào
//    - Output : void
void Add(linked_list_t* list, int value) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if (!new_node) return;
    new_node->value = value;
    new_node->previous_node = list->last_node;
    list->last_node = new_node;
    list->len++;
}

//4. Insert: chèn node vào lined list ? v? trí index
//- input :
//    *linked_list_t * ??a c?a ??i t??ng linked lisst, mà ta s? insert ??i t??ng vào
//    * int value : giá tr? c?a node.
//    * int index : v? trí node ???c insert vào.
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

//5. Remove: xoá m?t node ? v? trí cu?i cùng trong linked list
//- input : linked_list_t * ??a ch? c?a ??i t??ng linked list, mà ta mu?n xoá node ? trong nos
//- output : void
void Remove(linked_list_t* list) {
    if (list->len == 0) return;

    node_t* temp = list->last_node;
    list->last_node = temp->previous_node;
    free(temp);
    list->len--;
}

//6. RemoveIndex: xoá m?t node ? v? trí index
//- Input :
//    *linked_list_t * : ??a ch? c?a linked_líst, mà ta mu?n xoá node trong nos
//    * int index : v? trí c?a node mu?n xoá
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

//7. Search: tìm ki?m v? trí c?a node theo giá tr?
//- Input :
//    *linked_list_t * : ??a ch? c?a linked líst mà chúng ta c?n tìm ki?m
//    * int value : giá tr? c?a node mà chúng ta mu?n tìm ki?m
//    - Ouput : int : v? trí c?a node ???c tìm th?y, -1 n?u không tìm th?y b?t k? node vào có giá tr? value.
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

//8. GetValue: l?y giá tr? c?a node ? v? trí cu?i cùng
//- Input :
//    *linked_list_t * : ??a ch? c?a linked list cái mà chúng ta s? ?i ??c node trong ?ó.
//    - Ouput : int : giá tr? c?a node
int GetValue(linked_list_t* list) {
    return (list->last_node) ? list->last_node->value : -1;
}

//9. GetValueIndex: l?y giá tr? c?a node ? v? trí index
//- Input :
//    *linked_list_t * : ??a c?a c?a linked list cái mà chúng ta s? ?i ??c giá tr? c?a node ? v? trí index
//    * int index : v? trí c?a node chúng ta mu?n ??c
//    - Ouput : int : giá tr? c?a node mà chúng ta ??c ???c
int GetValueIndex(linked_list_t* list, int index) {
    if (index < 0 || index >= list->len) return -1;

    node_t* temp = list->last_node;
    for (int i = list->len - 1; i > index; i--) {
        temp = temp->previous_node;
    }
    return temp->value;
}

//10. DeleteAll: xoá t?t c? node trong linked lisst
//- Input : linked_list_t * : ??a ch? c?a linked list cái mà chúng ta mu?n xoá h?t t?t c? node c?a nos
//- Output : void
void DeleteAll(linked_list_t* list) {
    while (list->len > 0) {
        Remove(list);
    }
}

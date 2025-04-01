#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
    int value;
    struct node_t* previous_node;
} node_t;

typedef struct {
    node_t* last_node;
    int len;
} linked_list_t;

//1. Create : tạo ra đối tượng linked list
//- input : linked_list_t * -địa chỉ đối tượng linked_list được tạo
//- output : void
void Create(linked_list_t* ll) {
    ll->last_node = NULL;
    ll->len = 0;
}

//2. GetLen: lấy số lượng node trong linked lisst
//- input : linked_list_t * địa chỉ đối tượng linked_list cần GetLen
//- Output : int
int Getlen(linked_list_t* ll) {
    return ll->len;
}

//3. Add: thêm một node vào cuối linked_list
//- Input :
//    *linked_list_t * -địa chỉ đối tượng linked list.Cái mà chúng ta sẽ add node vào đó
//    * int - giá trị của node được add vào
//    - Output : void
void Add(linked_list_t* ll, int value) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = value;
    if (ll->len > 0) {
        new_node->previous_node = ll->last_node;
    }
    else {
        new_node->previous_node = { 0 };
    }
    ll->last_node = new_node;
    ll->len++;
}

//4. Insert: chèn node vào lined list ở vị trí index
//- input :
//    *linked_list_t * địa của đối tượng linked lisst, mà ta sẽ insert đối tượng vào
//    * int value : giá trị của node.
//    * int index : vị trí node được insert vào.
//    - Output : void
void Insert(linked_list_t* ll, int value, int index) {
    if (index < 0 || index > ll->len) return;
    if (index == ll->len) {
        Add(ll, value);
        return;
    }
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = value;

    if (index > 0 && index < ll->len) {
        node_t* current = ll->last_node;
        for (int i = ll->len - 1; i > index; i--) {
            current = current->previous_node;
        }
        new_node->previous_node = current->previous_node;
        current->previous_node = new_node;
        ll->len++;
    }
}

//5. Remove: xoá một node ở vị trí cuối cùng trong linked list
//- input : linked_list_t * địa chỉ của đối tượng linked list, mà ta muốn xoá node ở trong nos
//- output : void
//- gợi ý : giải phóng vùng nhớ(sử dụng hàm free) của node cuối cùng.
void Remove(linked_list_t* ll) {
    if (ll->len == 0) return;
    node_t* temp = ll->last_node;
    ll->last_node = ll->last_node->previous_node;
    free(temp);
    ll->len--;
}

//6. RemoveIndex: xoá một node ở vị trí index
//- Input :
//    *linked_list_t * : địa chỉ của linked_líst, mà ta muốn xoá node trong nos
//    * int index : vị trí của node muốn xoá
void RemoveIndex(linked_list_t* ll, int index) {
    if (index < 0 || index >= ll->len) return;
    if (index == 0) {
        Remove(ll);
        return;
    }
    node_t* current = ll->last_node;
    for (int i = ll->len - 1; i > index + 1; i--) {
        current = current->previous_node;
    }
    node_t* temp = current->previous_node;
    current->previous_node = temp->previous_node;
    free(temp);
    ll->len--;
}

//7. Search: tìm kiếm vị trí của node theo giá trị
//- Input :
//    *linked_list_t * : địa chỉ của linked líst mà chúng ta cần tìm kiếm
//    * int value : giá trị của node mà chúng ta muốn tìm kiếm
//    - Ouput : int : vị trí của node được tìm thấy, -1 nếu không tìm thấy bất kỳ node vào có giá trị value.
int Search(linked_list_t* ll, int value) {
    node_t* current = ll->last_node;
    for (int i = ll->len - 1; i >= 0; i--) {
        if (current->value == value) return i;
        current = current->previous_node;
    }
    return -1;
}

//8. GetValue: lấy giá trị của node ở vị trí cuối cùng
//- Input :
//    *linked_list_t * : địa chỉ của linked list cái mà chúng ta sẽ đi đọc node trong đó.
//    - Ouput : int : giá trị của node
int GetValue(linked_list_t* ll) {
    if (ll->len == 0) return -1;
    return ll->last_node->value;
}

//9. GetValueIndex: lấy giá trị của node ở vị trí index
//- Input :
//    *linked_list_t * : địa của của linked list cái mà chúng ta sẽ đi đọc giá trị của node ở vị trí index
//    * int index : vị trí của node chúng ta muốn đọc
int GetValueIndex(linked_list_t* ll, int index) {
    if (index < 0 || index >= ll->len) return -1;
    node_t* current = ll->last_node;
    for (int i = ll->len - 1; i > index; i--) {
        current = current->previous_node;
    }
    return current->value;
}

//10. DeleteAll: xoá tất cả node trong linked lisst
//- Input : linked_list_t * : địa chỉ của linked list cái mà chúng ta muốn xoá hết tất cả node của nos
//- Output : void
void DeleteAll(linked_list_t* ll) {
    while (ll->len > 0) {
        Remove(ll);
    }
}

void main()
{
    linked_list_t ll = { 0 };
    Create(&ll);
    Add(&ll, 1);
    Add(&ll, 2);
    Add(&ll, 3);
    Add(&ll, 4);
    Add(&ll, 5);

    printf("Gia tri tai index 3: %d\n", GetValueIndex(&ll, 3));
    printf("So luong node: %d\n", Getlen(&ll));
   
    Insert(&ll, 6, 3);
    Remove(&ll);
    RemoveIndex(&ll, 3);

    printf("Tim gia tri 3: %d\n", Search(&ll, 3));
    printf("Gia tri cuoi cung: %d\n", GetValue(&ll));

    GetValueIndex(&ll, 4);
    DeleteAll(&ll);
    printf("So luong node sau khi xoa: %d\n", Getlen(&ll));
}


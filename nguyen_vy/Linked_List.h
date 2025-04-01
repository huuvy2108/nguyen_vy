// Linked_List.h
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

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

void Create(linked_list_t* list);
int GetLen(linked_list_t* list);
void Add(linked_list_t* list, int value);
void Insert(linked_list_t* list, int value, int index);
void Remove(linked_list_t* list);
void RemoveIndex(linked_list_t* list, int index);
int Search(linked_list_t* list, int value);
int GetValue(linked_list_t* list);
int GetValueIndex(linked_list_t* list, int index);
void DeleteAll(linked_list_t* list);


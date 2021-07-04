//
//  ListIndex.c
//  线性表的链式存储
//
//  Created by Albert Xia on 2021/7/3.
//

#include "ListIndex.h"
#include <stdlib.h>

int GetElem(LNode L, int i, Elemtype *e){
    int j = 1;
    LinkList head;
    head = L.next;
    while (head && j < i) {
        head = head->next;
        j++;
    }
    if (!head || i<j) {
        return ERROR;
    }
    *e = head->data;
    return OK;
}

int ListInsert(LNode *L, int i, Elemtype e){
    int j = 1;
    LinkList head,S;
    head = L;
    while (head && j < i) {
        head = head->next;
        j++;
    }
    if (!head || j > i) {
        return ERROR;
    }
    S = (LinkList)malloc(sizeof(LNode));
    S->data = e;
    S->next = head->next;
    head->next = S;
    return OK;
}

int ListDelete(LNode *L, int i, Elemtype *e){
    int j = 1;
    LinkList head, p;
    head = L;
    while (head && j < i) {
        head = head->next;
        j++;
    }
    if (!head || j > i) {
        return ERROR;
    }
    p = head->next;
    head->next = p->next;
    *e = p->data;
    free(p);
    return OK;
}

void CreateListTail(LNode *L, int n){
    LinkList p,r;
    L = (LinkList)malloc(sizeof(LNode));
    r = L;
    for (int i = 1; i <= n; i++) {
        p = (LinkList)malloc(sizeof(LNode));
        Elemtype e;
        printf("输入要插入的数据：\n");
        while (scanf("%d",&e)) {
            p->data = e;
        }
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

int ClearList(LNode *L){
    LinkList p,q;
    p = L->next;
    while (p) {
        q=p;
        p = p->next;
        free(q);
    }
    L->next = NULL;
    return OK;
}

//
//  ListIndex.h
//  线性表的链式存储
//
//  Created by Albert Xia on 2021/7/3.
//

#ifndef ListIndex_h
#define ListIndex_h

#include <stdio.h>
#define OK 0
#define ERROR 1

typedef int Elemtype;

typedef struct Node{
    Elemtype data;
    struct Node *next;
}LNode, *LinkList;

int GetElem(LNode L, int i, Elemtype *e);

int ListInsert(LNode *L, int i, Elemtype e);

int ListDelete(LNode *L, int i, Elemtype *e);

void CreateListTail(LNode *L, int n);

int ClearList(LNode *L);




#endif /* ListIndex_h */

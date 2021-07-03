//
//  ListIndex.h
//  顺序存储线性表
//
//  Created by Albert Xia on 2021/7/3.
//

#ifndef ListIndex_h
#define ListIndex_h

#include <stdio.h>


#define MAXSIZE 10
#define OK 0;
#define ERROR 1;



typedef int ElemType;

typedef struct Node{
    ElemType data[MAXSIZE];
    int length;
}LNode;

void InitList(LNode *L);

int Get_Elem(LNode L, int i, ElemType *e);

int InsertList(LNode *L,int i, ElemType e);

int DeleteList(LNode *L, int i, ElemType *e);





#endif /* ListIndex_h */

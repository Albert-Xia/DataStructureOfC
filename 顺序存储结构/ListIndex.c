//
//  ListIndex.c
//  顺序存储线性表
//
//  Created by Albert Xia on 2021/7/3.
//

#include "ListIndex.h"


void InitList(LNode *L){
    L->length = 0;
}

int Get_Elem(LNode L, int i, ElemType *e){
    if (L.length == 0 || i < 1 || i > MAXSIZE) {
        return ERROR;
    }
    *e = L.data[i-1];
    return OK;
}


int InsertList(LNode *L,int i, ElemType e){
    int j;
    if (L->length == MAXSIZE || i < 1 || i > MAXSIZE + 1) {
        return ERROR;
    }
    if (i < L->length - 1) {
        for (j = L->length - 1; j >= i - 1; j--) {
            L->data[j + 1] = L->data[j];
        }
    }
    L->data[i-1] = e;
    L->length++;
    
    return OK;
}


int DeleteList(LNode *L, int i, ElemType *e){
    int j;
    if (L->length == 0 || i < 1 || i > MAXSIZE + 1) {
        return ERROR;
    }
    *e = L->data[i-1];
    if (i < L->length){
        for (j = i-1;  j < L->length-1; j++) {
            L->data[i-1] = L->data[i];
        }
    }
    L->length--;
    
    return OK;
}


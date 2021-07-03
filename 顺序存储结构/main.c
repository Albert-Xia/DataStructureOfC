//
//  main.c
//  顺序存储线性表
//
//  Created by Albert Xia on 2021/7/3.
//

#include <stdio.h>
#include "ListIndex.h"



int main(int argc, const char * argv[]) {
    LNode L;
    InitList(&L);
    ElemType data, dataOfRemove;
    for (int i = 1; i <= 8 ; i++) {
        InsertList(&L, i, i);
    }
    for (int i = 1; i <= 8; i++) {
        Get_Elem(L, i, &data);
        printf("%d ",data);
    }
    printf("\n---------------------------\n");
    DeleteList(&L, 4, &dataOfRemove);
    printf("%d\n",dataOfRemove);
    return 0;
}

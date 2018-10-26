#ifndef CVECTOR_H_INCLUDED
#define CVECTOR_H_INCLUDED

#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

#include "math.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */


typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList; /* 定义LinkList */
ElemType e;   //增加，删除时使用
Status i;   //判断是否为空时使用
int j,k;

Status visit(ElemType c);
Status cvector(LinkList *L);  /* 初始化顺序线性表 */
Status empty(LinkList L);  /* 初始条件：顺序线性表L已存在。操作结果：若L为空表，则返回TRUE，否则返回FALSE */
Status clear(LinkList L); /* 初始条件：顺序线性表L已存在。操作结果：将L重置为空表 */
int size(LinkList L);           /* 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数 */
Status GetElem(LinkList L,int i,ElemType *e);   /* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) 操作结果：用e返回L中第i个数据元素的值 */
int LocateElem(LinkList L,ElemType e);      /* 初始条件：顺序线性表L已存在 */
                                            /* 操作结果：返回L中第1个与e满足关系的数据元素的位序。 */
                                            /* 若这样的数据元素不存在，则返回值为0 */
Status insert(LinkList L,int i,ElemType e);  /* 初始条件：顺序线性表L已存在,1≤i≤ListLength(L)， */
                                                    /* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
Status push_back(LinkList L,ElemType e);   /*在末尾插入元素*/
Status erase(LinkList L,int i,ElemType *e);   /* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
                                                /* 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1 */
Status pop_back(LinkList L,ElemType *e);  /*在末尾删除最后一个元素，并返回*/
Status ListTraverse(LinkList L);             /* 初始条件：顺序线性表L已存在 */
                                            /* 操作结果：依次对L的每个数据元素输出 */
void CreateListHead(LinkList *L, int n);    /*  随机产生n个元素的值，建立带表头结点的单链线性表L（头插法） */
void CreateListTail(LinkList *L, int n);    /*  随机产生n个元素的值，建立带表头结点的单链线性表L（尾插法） */

#endif // CVECTOR_H_INCLUDED

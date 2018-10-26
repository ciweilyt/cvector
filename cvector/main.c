#include "cvector.h"
#include <stdio.h>
int main()
{
    LinkList L;  //L是个指针

    i=cvector(&L);  //创建

    printf("初始化L后：ListLength(L)=%d\n",size(L));
    for(j=1;j<=5;j++)
            i=insert(L,1,j);
    printf("在L的表头依次插入1～5后：L.data=");
    ListTraverse(L);       //依次显示

    printf("ListLength(L)=%d \n",size(L));
    i=empty(L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    i=clear(L);
    printf("清空L后：ListLength(L)=%d\n",size(L));
    i=empty(L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    for(j=1;j<=10;j++)
            insert(L,j,j);  //尾插入法
    printf("在L的表尾依次插入1～10后：L.data=");
    ListTraverse(L);

    printf("ListLength(L)=%d \n",size(L));
    push_back(L,888);  //尾插法
    push_back(L,888);  //尾插法
    push_back(L,888);  //尾插法
    printf("pushL后：ListLength(L)=%d\n",size(L));
    pop_back(L,&e);
    printf("pop后：ListLength(L)=%d\n",size(L));
    printf("pop的值%d\n",e);
    printf("在pop后：L.data=");
    ListTraverse(L);



    insert(L,1,0);
    printf("在L的表头插入0后：L.data=");
    ListTraverse(L);
    printf("ListLength(L)=%d \n",size(L));

    GetElem(L,5,&e);
    printf("第5个元素的值为：%d\n",e);
    for(j=3;j<=4;j++)
    {
            k=LocateElem(L,j);   //找到值为j的元素的存储位置
            if(k)
                    printf("第%d个元素的值为%d\n",k,j);
            else
                    printf("没有值为%d的元素\n",j);
    }


    k=size(L); /* k为表长 */
    for(j=k+1;j>=k;j--)
    {
            i=erase(L,j,&e); /* 删除第j个数据 */
            if(i==ERROR)
                    printf("删除第%d个数据失败\n",j);
            else
                    printf("删除第%d个的元素值为：%d\n",j,e);
    }
    printf("依次输出L的元素：");
    ListTraverse(L);

    j=5;
    erase(L,j,&e); /* 删除第5个数据 */
    printf("删除第%d个的元素值为：%d\n",j,e);

    printf("依次输出L的元素：");
    ListTraverse(L);

    i=clear(L);
    printf("\n清空L后：ListLength(L)=%d\n",size(L));
    CreateListHead(&L,20);
    printf("整体创建L的元素(头插法)：");
    ListTraverse(L);

    i=clear(L);
    printf("\n删除L后：ListLength(L)=%d\n",size(L));
    CreateListTail(&L,20);
    printf("整体创建L的元素(尾插法)：");
    ListTraverse(L);


    return 0;
}

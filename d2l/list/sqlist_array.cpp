//#include <stdio.h>
//#include <stdlib.h>
//
//#define INIT_SIZE 5  // 初始容量
//
//typedef struct {
//    int *data;       // 指向动态分配数组的指针
//    int maxsize;     // 当前最大容量
//    int length;      // 当前长度
//} SqList;
//
//// 初始化顺序表
//void InitList(SqList *L) {
//    L->data = (int *) malloc(INIT_SIZE * sizeof(int));
//    if (L->data == NULL) {
//        printf("内存分配失败\n");
//        exit(1);
//    }
//    L->maxsize = INIT_SIZE;
//    L->length = 0;
//    printf("顺序表已初始化，初始容量: %d\n", L->maxsize);
//}
//
//// 扩容函数
//void IncreaseSize(SqList *L, int len) {
//    int *new_data = (int *) realloc(L->data, (L->maxsize + len) * sizeof(int));
//    if (new_data == NULL) {
//        printf("内存重新分配失败\n");
//        exit(1);
//    }
//    L->data = new_data;
//    L->maxsize += len;
//    printf("顺序表已扩容，新容量为: %d\n", L->maxsize);
//}
//
//// 自动扩容检查
//void CheckCapacity(SqList *L) {
//    if (L->length >= L->maxsize) {
//        // 当元素个数达到最大容量时，自动扩容
//        IncreaseSize(L, L->maxsize);  // 扩容为原来的两倍
//    }
//}
//
//// 顺序输出顺序表
//void PrintList(SqList *L) {
//    if (L->length == 0) {
//        printf("顺序表为空\n");
//        return;
//    }
//
//    printf("顺序表元素（容量%d，长度%d）: ", L->maxsize, L->length);
//    for (int i = 0; i < L->length; i++) {
//        printf("%d ", L->data[i]);
//    }
//    printf("\n");
//}
//
//// 在位置i插入元素e
//void ListInsert(SqList *L, int i, int e) {
//    if (i < 1 || i > L->length + 1) {  // 判断i的范围是否有效
//        printf("插入位置不合法\n");
//        return;
//    }
//
//    CheckCapacity(L);  // 检查是否需要扩容
//
//    for (int j = L->length; j >= i; j--) {  // 将第i个元素及之后的元素后移
//        L->data[j] = L->data[j - 1];
//    }
//    L->data[i - 1] = e;  // 在位置i处放入e
//    L->length++;         // 长度加1
//}
//
//// 删除位置i的元素，通过参数e返回值，函数返回是否成功
//int ListDelete(SqList *L, int i, int *e) {
//    if (i < 1 || i > L->length) {  // 判断i的范围是否有效
//        printf("删除位置不合法\n");
//        return 0;  // 返回0表示失败
//    }
//    if (L->length == 0) {  // 判断顺序表是否为空
//        printf("顺序表为空，无法删除\n");
//        return 0;  // 返回0表示失败
//    }
//
//    *e = L->data[i - 1];  // 将被删除的元素赋值给e指向的位置
//
//    for (int j = i; j < L->length; j++) {  // 将第i个位置后的元素前移
//        L->data[j - 1] = L->data[j];
//    }
//    L->length--;  // 长度减1
//    return 1;     // 返回1表示成功
//}
//
//// 按值查找，返回元素e的位置（从1开始）
//int LocateElem(SqList *L, int e) {
//    for (int i = 0; i < L->length; i++) {
//        if (L->data[i] == e) {
//            return i + 1;  // 返回位置（从1开始）
//        }
//    }
//    return 0;  // 查找失败，返回0
//}
//
//// 获取位置i的元素，通过参数e返回值，函数返回是否成功
//int GetElem(SqList *L, int i, int *e) {
//    if (i < 1 || i > L->length) {
//        printf("位置不合法\n");
//        return 0;  // 返回0表示失败
//    }
//
//    *e = L->data[i - 1];  // 将获取的元素赋值给e指向的位置
//    return 1;             // 返回1表示成功
//}
//
//// 销毁顺序表，释放内存
//void DestroyList(SqList *L) {
//    if (L->data != NULL) {
//        free(L->data);
//        L->data = NULL;
//    }
//    L->maxsize = 0;
//    L->length = 0;
//    printf("顺序表已销毁\n");
//}
//
//int main() {
//    SqList L;
//
//    // 初始化顺序表
//    InitList(&L);
//
//    // 插入元素，测试自动扩容
//    for (int i = 1; i <= 10; i++) {
//        ListInsert(&L, i, i * 10);
//    }
//    PrintList(&L);
//
//    // 手动扩容
//    IncreaseSize(&L, 5);
//    PrintList(&L);
//
//    // 继续插入元素
//    for (int i = 11; i <= 15; i++) {
//        ListInsert(&L, i, i * 10);
//    }
//    PrintList(&L);
//
//    // 删除元素
//    int e;
//    int delete_bool = ListDelete(&L, 5, &e);
//    if (delete_bool) {
//        printf("删除的元素是：%d\n", e);
//    }
//    PrintList(&L);
//
//    // 查找元素
//    int pos = LocateElem(&L, 80);
//    if (pos > 0) {
//        printf("元素80的位置是：%d\n", pos);
//    } else {
//        printf("未找到元素80\n");
//    }
//
//    // 获取元素
//    int elem;
//    int get_bool = GetElem(&L, 3, &elem);
//    if (get_bool) {
//        printf("第3个元素是：%d\n", elem);
//    }
//
//    // 销毁顺序表
//    DestroyList(&L);
//
//    return 0;
//}
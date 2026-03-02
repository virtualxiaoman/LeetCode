//#include <iostream>
//using namespace std;
//
//#define INIT_SIZE 10  // 初始容量
//
//typedef struct {
//    int *data;      // 指向动态分配数组的指针
//    int maxsize;    // 当前最大容量
//    int length;     // 当前长度
//} SqList;
//
//// 初始化顺序表
//void InitList(SqList &L) {
//    L.data = new int[INIT_SIZE];  // L->data = (int *)malloc(INIT_SIZE * sizeof(int));
//    if (!L.data) {
//        cout << "内存分配失败" << endl;
//        exit(1);
//    }
//    L.maxsize = INIT_SIZE;
//    L.length = 0;
//}
//
//// 扩容函数
//void IncreaseSize(SqList &L, int len) {
//    int *p = L.data;
//    L.data = new int[L.maxsize + len];  // 重新分配更大的空间
//    if (!L.data) {
//        cout << "内存分配失败" << endl;
//        exit(1);
//    }
//    // 复制原有数据到新空间
//    for (int i = 0; i < L.length; i++)
//        L.data[i] = p[i];
//    L.maxsize += len;  // 更新最大容量
//    delete[] p;        // 释放原有空间
//    cout << "顺序表已扩容，新容量为: " << L.maxsize << endl;
//}
//
//// 自动扩容检查
//void CheckCapacity(SqList &L) {
//    if (L.length >= L.maxsize) {
//        // 当元素个数达到最大容量时，自动扩容
//        IncreaseSize(L, L.maxsize);  // 扩容为原来的两倍
//    }
//}
//
//// 顺序输出顺序表
//void PrintList(SqList L) {
//    if (L.length == 0) {
//        cout << "顺序表为空" << endl;
//        return;
//    }
//    cout << "顺序表元素（容量" << L.maxsize << "，长度" << L.length << "）: ";
//    for (int i = 0; i < L.length; i++)
//        cout << L.data[i] << " ";
//    cout << endl;
//}
//
//// 在位置i插入元素e
//bool ListInsert(SqList &L, int i, int e) {
//    if (i < 1 || i > L.length + 1) {  // 判断i的范围是否有效
//        cout << "插入位置不合法" << endl;
//        return false;
//    }
//    CheckCapacity(L);  // 检查是否需要扩容
//    for (int j = L.length; j >= i; j--) {  // 将第i个元素及之后的元素后移
//        L.data[j] = L.data[j - 1];
//    }
//    L.data[i - 1] = e;  // 在位置i处放入e
//    L.length++;         // 长度加1
//    return true;
//}
//
//// 删除位置i的元素，并用e返回其值
//bool ListDelete(SqList &L, int i, int &e) {
//    if (i < 1 || i > L.length) {  // 判断i的范围是否有效
//        cout << "删除位置不合法" << endl;
//        return false;
//    }
//    if (L.length == 0) {  // 判断顺序表是否为空
//        cout << "顺序表为空，无法删除" << endl;
//        return false;
//    }
//    e = L.data[i - 1];  // 将被删除的元素赋值给e
//    for (int j = i; j < L.length; j++)  // 将第i个位置后的元素前移
//        L.data[j - 1] = L.data[j];
//    L.length--;  // 长度减1
//    return true;
//}
//
//// 按值查找，返回元素e的位置（从1开始）
//int LocateElem(SqList L, int e) {
//    for (int i = 0; i < L.length; i++)
//        if (L.data[i] == e)
//            return i + 1;  // 返回位置（从1开始）
//    return 0;  // 查找失败，返回0
//}
//
//// 获取位置i的元素，并用e返回其值
//bool GetElem(SqList L, int i, int &e) {
//    if (i < 1 || i > L.length) {
//        cout << "位置不合法" << endl;
//        return false;
//    }
//    e = L.data[i - 1];
//    return true;
//}
//
//// 销毁顺序表，释放内存
//void DestroyList(SqList &L) {
//    if (L.data) {
//        delete[] L.data;
//        L.data = nullptr;
//    }
//    L.maxsize = 0;
//    L.length = 0;
//    cout << "顺序表已销毁" << endl;
//}
//
//int main() {
//    SqList L;
//    InitList(L);
//    // 插入元素，测试自动扩容
//    for (int i = 1; i <= 15; i++) {
//        ListInsert(L, i, i * 10);  // 插入10,20,...,150
//    }
//    PrintList(L);  // 容量20，长度15（省略了部分输出，下同）
//    // 手动扩容
//    IncreaseSize(L, 10);
//    PrintList(L);  // 容量30，长度15
//    // 继续插入元素
//    for (int i = 16; i <= 25; i++) {
//        ListInsert(L, i, i * 10);
//    }
//    PrintList(L);  // 容量30，长度25
//    // 删除元素
//    int deletedElem;
//    if (ListDelete(L, 5, deletedElem))
//        cout << "删除的元素是：" << deletedElem << endl;  // 删除的元素是：50
//    PrintList(L);  // 容量30，长度24
//    // 查找元素
//    int pos = LocateElem(L, 150);
//    if (pos > 0)
//        cout << "元素150的位置是：" << pos << endl;  // 元素150的位置是：14
//    // 获取元素
//    int elem;
//    if (GetElem(L, 10, elem))
//        cout << "第10个元素是：" << elem << endl;  // 第10个元素是：110
//    // 销毁顺序表
//    DestroyList(L);
//    return 0;
//}
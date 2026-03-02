//#include <iostream>
//using namespace std;
//
//const int MAXSIZE = 100;  // 定义顺序表的最大长度
//
//typedef struct {
//    int data[MAXSIZE];  // 存储数据的数组
//    int length;         // 当前长度
//} SqList;
//
//// 初始化顺序表
//void InitList(SqList &L) {
//    L.length = 0;
//}
//
//// 顺序输出顺序表
//void PrintList(SqList L) {
//    if (L.length == 0) {
//        cout << "顺序表为空" << endl;
//        return;
//    }
//    cout << "顺序表元素：";
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
//    if (L.length >= MAXSIZE) {  // 判断顺序表是否已满
//        cout << "顺序表已满，无法插入" << endl;
//        return false;
//    }
//    for (int j = L.length; j >= i; j--)  // 将第i个元素及之后的元素后移。始于L.length，终于i
//        L.data[j] = L.data[j - 1];
//    L.data[i - 1] = e;  // 在位置i处放入e
//    L.length++;         // 别忘
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
//    for (int j = i; j < L.length; j++)   // 将第i个位置后的元素前移。始于i，终于L.length-1
//        L.data[j - 1] = L.data[j];
//    L.length--;  // 别忘
//    return true;
//}
//
//// 按值查找，返回元素e的位置（从1开始）
//int LocateElem(SqList L, int e) {
//    for (int i = 0; i < L.length; i++)
//        if (L.data[i] == e)
//            return i + 1;  // 返回顺序表中的位置（从1开始）
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
//int main() {
//    SqList L;
//    InitList(L);
//    // 插入元素
//    for (int i = 1; i <= 5; i++)
//        ListInsert(L, i, i * 10);
//    PrintList(L);  // 顺序表元素：10 20 30 40 50
//    // 在指定位置插入元素
//    ListInsert(L, 3, 99);
//    PrintList(L);  // 顺序表元素：10 20 99 30 40 50
//    // 删除元素
//    int deletedElem;
//    if (ListDelete(L, 4, deletedElem))
//        cout << "删除的元素是：" << deletedElem << endl;  // 删除的元素是：30
//    PrintList(L);  // 顺序表元素：10 20 99 40 50
//    // 查找元素
//    int pos = LocateElem(L, 99);
//    if (pos > 0)
//        cout << "元素99的位置是：" << pos << endl;  // 元素99的位置是：3
//    else
//        cout << "未找到元素99" << endl;
//    // 获取元素
//    int elem;
//    if (GetElem(L, 2, elem))
//        cout << "第二个元素是：" << elem << endl;  // 第二个元素是：20
//    return 0;
//}
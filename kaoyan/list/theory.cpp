// Created by virtual小满 on 2025/3/21.

#include <iostream>
#include <vector>

using namespace std;

// 链表节点定义
struct ListNode {
    int val;  // 节点值
    ListNode *next;  // 指向下一个节点的指针
    ListNode() : val(0), next(nullptr) {}  // 默认构造函数
    ListNode(int x) : val(x), next(nullptr) {}  // [常用这个]参数为节点值的构造函数
    ListNode(int x, ListNode *next) : val(x), next(next) {}  // 参数为节点值和指向下一个节点的指针的构造函数
};

class LinkedList {
private:
    ListNode *head;  // 头节点指针

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        // 析构函数，释放链表内存
        ListNode *current = head;
        while (current != nullptr) {
            ListNode *temp = current;
            current = current->next;
            delete temp;
        }
    }

    // 在指定位置插入节点（位置从0开始）
    bool insert(int pos, int val) {
        if (pos < 0) return false;

        ListNode *newNode = new ListNode(val);
        if (pos == 0) {  // 插入头部
            newNode->next = head;
            head = newNode;
            return true;
        }

        ListNode *current = head;
        // 遍历到插入位置的前一个节点
        for (int i = 0; i < pos - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) {  // 插入位置无效
            delete newNode;
            return false;
        }

        newNode->next = current->next;
        current->next = newNode;
        return true;
    }

    // 根据数组创建链表
    ListNode *arr2list(const vector<int> &arr) {
        if (arr.empty()) return nullptr;
        ListNode *head = new ListNode(arr[0]);
        ListNode *curr = head;
        for (int i = 1; i < arr.size(); ++i) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return head;
    }

    // 删除第一个值为val的节点
    bool remove(int val) {
        if (head == nullptr) return false;

        if (head->val == val) {  // 删除头节点
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        ListNode *current = head;
        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode *temp = current->next;
                current->next = temp->next;
                delete temp;
                return true;
            }
            current = current->next;
        }

        return false;  // 未找到节点
    }

    // 输出链表内容
    void print(ListNode *node = nullptr) {
        ListNode *current = (node != nullptr) ? node : head; // 如果传入了node，就用node；否则用类中的head
        while (current != nullptr) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }
};

//int main() {
//    LinkedList list;
//    list.print();         // 输出：
//
//    // 插入操作示例
//    list.insert(0, 10);   // 头部插入10
//    list.insert(1, 20);   // 位置1插入20，链表：10->20
//    list.insert(1, 15);   // 位置1插入15，链表：10->15->20
//    list.print();         // 输出：10 15 20
//
//    // 删除操作示例
//    list.remove(15);      // 删除15
//    list.print();         // 输出：10 20
//    list.remove(30);      // 尝试删除不存在的值
//    list.print();         // 输出：10 20
//
//
//    list.insert(1, 10);
//    list.print();
//    list.remove(10);
//    list.print();
//    return 0;
//}   // list离开作用域，析构函数自动调用，释放所有节点内存
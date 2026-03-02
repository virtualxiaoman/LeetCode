//// Created by virtual小满 on 2025/3/23.
////MyLinkedList() 初始化 MyLinkedList 对象。
////int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 -1 。
////void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
////void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
////void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
////void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include "theory.cpp"
//
//using namespace std;
//
//class MyLinkedList {
//    LinkedList list;
//    vector<int> arr = {1, 2, 6, 3, 4, 5, 6};
//    ListNode *head = list.arr2list(arr);
//
//public:
//    MyLinkedList() {
//        list.print(head);
//    }
//
//    int get(int index) {
//        ListNode *cur = head;
//        int i = 0;
//        for (; i < index and cur != nullptr; i++, cur = cur->next);
//        if (cur != nullptr)
//            return cur->val;
//        else
//            return -1;
//    }
//
//    void addAtHead(int val) {
//        ListNode *cur = head;
//        struct ListNode *new_head = new ListNode(val, cur);
//        head = new_head;
////        list.print(head);
//    }
//
//    void addAtTail(int val) {
//        ListNode *cur = head;
//        for (; cur->next != nullptr; cur = cur->next);
//        struct ListNode *tail = new ListNode(val);
//        cur->next = tail;
////        list.print(head);
//    }
//
//    void addAtIndex(int index, int val) {
//        ListNode *cur = head;
//        if (index == 0)
//            addAtHead(val);
//        else {
//            for (int i = 0; i < index - 1 and cur != nullptr; i++, cur = cur->next);
//            struct ListNode *index_node = new ListNode(val, cur->next);
//            cur->next = index_node;
//        }
//        list.print(head);
//    }
//
//    void deleteAtIndex(int index) {
//        ListNode *cur = head;
//        if(index==0)
//            head = head->next;
//        for (int i=0; i< index-1 and cur->next->next != nullptr; i++, cur = cur->next);
//        cur->next = cur->next->next;
//        list.print(head);
//    }
//};
//
//
//int main() {
//    MyLinkedList *obj = new MyLinkedList();
//    int index = 4, val = 2;
//    int param_1 = obj->get(index);
//    cout << param_1 << endl;
//    obj->addAtHead(val);
//    obj->addAtTail(val);
//    obj->addAtIndex(index, val);
//    obj->deleteAtIndex(index);
//    return 0;
//}
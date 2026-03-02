// // 你可以选择使用单链表或者双链表，设计并实现自己的链表。
// //
// //单链表中的节点应该具备两个属性：val 和 next 。val 是当前节点的值，next 是指向下一个节点的指针/引用。
// //
// //如果是双向链表，则还需要属性 prev 以指示链表中的上一个节点。假设链表中的所有节点下标从 0 开始。
// //
// //实现 MyLinkedList 类：
// //
// //MyLinkedList() 初始化 MyLinkedList 对象。
// //int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 -1 。
// //void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
// //void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
// //void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
// //void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
//
//
// // Created by virtual小满 on 2026/1/30.
//
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include "theory.cpp"
//
// using namespace std;
//
// class MyLinkedList {
//     LinkedList list;
//     vector<int> arr = {1, 2, 6, 3, 4, 5, 6};
//     ListNode *head = list.arr2list(arr);
// public:
//     MyLinkedList() {
//         list.print(head);
//     }
//
//     int get(int index) {
//         int loc = 0;
//         ListNode *cur = head;
//         while (cur != nullptr) {
//             if (cur->val == index)
//                 return loc;
//             else {
//                 cur = cur->next;
//             }
//         }
//     }
//
//     void addAtHead(int val) {
//         ListNode *new_head = new ListNode(val);
//         new_head->next = head;
//         head = new_head;
//     }
//
//     void addAtTail(int val) {
//         ListNode *cur = head;
//         while (cur->next != nullptr)
//             cur = cur->next;
//         ListNode *p = new ListNode(val);
//         cur->next = p;
//         p->next = nullptr;
//     }
//
//     void addAtIndex(int index, int val) {
//         ListNode *cur = head;
//         int i = 0;
//         for (;i < index; i++) {
//             if (cur != nullptr)
//                 cur = cur->next;
//         }
//         if (i == index){
//             ListNode* p = new ListNode(val);
//
//         }
//     }
//
//     void deleteAtIndex(int index) {
//
//     }
// };
//
// /**
//  * Your MyLinkedList object will be instantiated and called as such:
//  * MyLinkedList* obj = new MyLinkedList();
//  * int param_1 = obj->get(index);
//  * obj->addAtHead(val);
//  * obj->addAtTail(val);
//  * obj->addAtIndex(index,val);
//  * obj->deleteAtIndex(index);
//  */
// int main() {
//     MyLinkedList *obj = new MyLinkedList();
//     int index = 0;
//     int val = 0;
//     int param_1 = obj->get(index);
//     obj->addAtHead(val);
//     obj->addAtTail(val);
//     obj->addAtIndex(index, val);
//     obj->deleteAtIndex(index);
//     return 0;
// }
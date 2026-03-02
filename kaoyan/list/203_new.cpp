// // // 给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
// // /输入：head = [1,2,6,3,4,5,6], val = 6
// // /输出：[1,2,3,4,5]
// // **
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // // Created by virtual小满 on 2026/1/30.
//
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include "theory.cpp"
//
// using namespace std;
//
// class Solution {
// public:
//     ListNode *removeElements(ListNode *head, int val) {
//         ListNode *dummyHead = new ListNode(0); // 设置一个虚拟头结点
//         dummyHead->next = head; // 将虚拟头结点指向head，这样方便后面做删除操作
//         ListNode *cur = dummyHead;
//         while (cur->next != nullptr) {
//             if (cur->next->val == val) {
//                 cur->next = cur->next->next;
//             } else {
//                 cur = cur->next;
//             }
//         }
//         return dummyHead->next;
//     }
// };
//
// int main() {
//     LinkedList list;
//     vector<int> arr = {7, 7, 7, 7, 7};
//     ListNode *head = list.arr2list(arr);
//     list.print(head);
//     Solution s;
//     ListNode *ans = s.removeElements(head, 7);
//     list.print(ans);
//     return 0;
// }
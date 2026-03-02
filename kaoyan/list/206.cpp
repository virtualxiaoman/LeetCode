// //
// ////
// //// Created by HP on 2025/3/23.
// ////
// //
// //
// //// Created by virtual小满 on 2025/3/23.
// //
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
//
// // 给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
// # include "theory.cpp"
//
// class Solution
// {
// public:
//     ListNode* reverseList(ListNode* head)
//     {
//         ListNode* p = head;
//         ListNode* l = nullptr;
//         ListNode* r;
//         if (!head)
//             return head;  // 空
//         if (head->next != nullptr)
//             r = head->next;
//         else
//             return p;  // 只有一个节点
//         while (p->next != nullptr)
//         {
//             p->next = l;
//             l = p;
//             p = r;
//             r = r->next;
//         }
//         p->next = l;
//         return p;
//     }
// };
//
// int main()
// {
//     LinkedList list;
//     vector<int> arr = {1, 2, 3, 4, 5};
//     ListNode* head = list.arr2list(arr);
//     list.print(head);
//     Solution s;
//     ListNode* ans = s.reverseList(head);
//     list.print(ans);
//     return 0;
// }

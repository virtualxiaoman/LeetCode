// /**
// * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// # include "theory.cpp"
//
// class Solution
// {
// public:
//     ListNode* swapPairs(ListNode* head)
//     {
//         ListNode* r;
//         if (head and head->next)
//             r = head->next->next;
//         else
//             return head; // 空或者单个元素
//         ListNode* p = head->next;
//         ListNode* l = head;
//         ListNode* ans = head->next;
//         while (r != nullptr and r->next != nullptr)
//         {
//             l->next = r->next;
//             p->next = l;
//             l = r;
//             p = r->next;
//             r = r->next->next;
//         }
//         l->next = r;
//         p->next = l;
//         return ans;
//     }
// };
//
// int main()
// {
//     LinkedList list;
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     ListNode* head = list.arr2list(arr);
//     // list.print(head);
//     Solution s;
//     ListNode* ans = s.swapPairs(head);
//     list.print(ans);
//     return 0;
// }

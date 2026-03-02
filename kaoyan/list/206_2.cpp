// # include "theory.cpp"
//
// class Solution
// {
// public:
//     ListNode* reverseList(ListNode* head)
//     {
//         ListNode* r; // 保存cur的下一个节点
//         ListNode* p = head;
//         ListNode* l = NULL;
//         while (p)
//         {
//             r = p->next; // 保存一下 cur的下一个节点，因为接下来要改变cur->next
//             p->next = l; // 翻转操作
//             // 更新pre 和 cur指针
//             l = p;
//             p = r;
//         }
//         return l;
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

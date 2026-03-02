// # include "theory.cpp"
//
// class Solution
// {
// public:
//     ListNode* reverse(ListNode* l, ListNode* p)
//     {
//         if (p == nullptr) return l;
//         ListNode* r = p->next;
//         p->next = l;
//         return reverse(p, r); // 递归的写法，其实就是做了这两步: l = p; p = temp;
//     }
//
//     ListNode* reverseList(ListNode* head)
//     {
//         return reverse(nullptr, head); // 相当于ListNode* cur = head; ListNode* pre = NULL;
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

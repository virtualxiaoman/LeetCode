# include "theory.cpp"

class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        struct ListNode* dummyHead = new ListNode(0, head);
        ListNode* l = dummyHead;
        ListNode* r = dummyHead;
        for (int i = 0; i < n; i++)
            r = r->next;
        while (r != nullptr and r->next != nullptr)
        {
            l = l->next;
            r = r->next;
        }
        l->next = l->next->next;
        return dummyHead->next;
    }
};

int main()
{
    LinkedList list;
    vector<int> arr = {1, 2, 3, 4};
    ListNode* head = list.arr2list(arr);
    // list.print(head);
    Solution s;
    ListNode* ans = s.removeNthFromEnd(head, 2);
    list.print(ans);
    return 0;
}

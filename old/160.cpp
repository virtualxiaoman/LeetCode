//#include <iostream>
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//        if (headA == nullptr || headB == nullptr) {
//            return nullptr;
//        }
//        ListNode *pA = headA, *pB = headB;
//        while (pA != pB) {
//            pA = pA == nullptr ? headB : pA->next;
//            pB = pB == nullptr ? headA : pB->next;
//        }
//        return pA;
//    }
//};
//
//// Helper function to create a linked list from an array
//ListNode* createLinkedList(int arr[], int n) {
//    if (n == 0) return nullptr;
//    ListNode* head = new ListNode(arr[0]);
//    ListNode* current = head;
//    for (int i = 1; i < n; ++i) {
//        current->next = new ListNode(arr[i]);
//        current = current->next;
//    }
//    return head;
//}
//
//// Helper function to print the elements of a linked list
//void printLinkedList(ListNode* head) {
//    ListNode* current = head;
//    while (current != nullptr) {
//        std::cout << current->val << " -> ";
//        current = current->next;
//    }
//    std::cout << "nullptr" << std::endl;
//}
//
//int main() {
//    Solution solution;
//
//    // Create linked lists A and B
//    int arrA[] = {4, 1, 8, 4, 5};
//    int arrB[] = {5, 6, 1, 8, 4, 5};
//    ListNode* headA = createLinkedList(arrA, 5);
//    ListNode* headB = createLinkedList(arrB, 6);
//
//    // Connect the intersection node
//    ListNode* intersectionNode = headA->next->next->next; // Intersection node is "8"
//    headB->next->next->next->next->next = intersectionNode;
//
//    // Test the solution
//    std::cout << "Linked List A: ";
//    printLinkedList(headA);
//    std::cout << "Linked List B: ";
//    printLinkedList(headB);
//
//    ListNode* result = solution.getIntersectionNode(headA, headB);
//    if (result != nullptr) {
//        std::cout << "Intersection Node Value: " << result->val << std::endl;
//    } else {
//        std::cout << "No intersection found." << std::endl;
//    }
//
//    // Clean up memory
//    delete headA;
//    delete headB;
//
//    return 0;
//}
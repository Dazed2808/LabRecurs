#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* nextNode = head->next->next;

    head->next->next = head;
    ListNode* newHead = head->next;

    head->next = swapPairs(nextNode);

    return newHead;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    std::cout << "Input: ";
    printList(head);

    head = swapPairs(head);

    std::cout << "Output: ";
    printList(head);

    return 0;
}

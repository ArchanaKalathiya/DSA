// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.

// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.
// Example 2:
// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
// Constraints:
// The number of nodes in the list is in the range [1, 100].
// 1 <= Node.val <= 100 

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution{
    public:
    ListNode* middleNode(ListNode* head){
        ListNode* middle=head;
        ListNode* end = head;

        while(end != nullptr && end->next != nullptr){
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values for the nodes: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; i++) {
        ListNode* newNode = new ListNode(arr[i]);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
     // Find and print the middle node
    ListNode* middleNode = sol.middleNode(head);
    cout << "Middle Node Value: " << middleNode->val << endl;

    // Clean up memory by freeing the linked list nodes
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
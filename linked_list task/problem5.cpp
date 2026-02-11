/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
public:
    int size = 0;

    Node* reverseList(Node* head) {
        Node* first = head;
        Node* prev = NULL;

        while (first != nullptr) {
            size++;
            Node* N_node = first->next;
            first->next = prev;
            prev = first;
            first = N_node;
        }

        return prev;
    }
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* N = reverseList(head);
        if (k > size) return -1;
        while (--k) {
            N = N->next;
        }
        return N->data;

    }
};


// Function to insert a node in the middle of the linked list.
class Solution {
public:
    Node* insertInMiddle(Node* head, int x) {
        // Code Here
        if (head == nullptr) {
            return new Node(x);
        }

        Node* slowptr = head;
        Node* fastptr = head;
        while (fastptr->next != NULL && fastptr->next->next != NULL && fastptr != NULL) {
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;

        }

        Node* new_node = new Node(x);
        new_node->next = slowptr->next;
        slowptr->next = new_node;

        return head;

    }
};

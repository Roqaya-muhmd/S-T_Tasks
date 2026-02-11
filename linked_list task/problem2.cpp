/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
public:
    bool areIdentical(Node* head1, Node* head2) {
        // code here
        bool identical = false;
        while ((head1->next != NULL && head2->next != NULL) && head1->data == head2->data) {
            head1 = head1->next;
            head2 = head2->next;

        }
        if (head1->data == head2->data) {
            head1 = head1->next;
            head2 = head2->next;
        }
        if (head1 == NULL && head2 == NULL)identical = true;
        return identical;
    }
};
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
public:
    vector<int> displayList(Node* head) {
        // code here
        vector<int>list;
        Node* ptr = head;
        while (ptr->next != NULL)
        {
            list.push_back(ptr->data);
            ptr = ptr->next;
        }
        list.push_back(ptr->data);
        return list;
    }
};
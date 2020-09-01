#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

void swap(Node *before){
    if(head == NULL){
        return;
    }
    Node *temp = before->next;
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    temp2->next = temp;
    before->next = temp2;
}

int main() {
   insert(5);
   insert(4);
   insert(3);
   insert(2);
   insert(1);
   cout<<"The linked list is: ";
   cout << endl;
   display();
   cout << endl;
   swap(head);
   display();
}
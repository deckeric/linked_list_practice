#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
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
    temp->prev = temp2;
    temp2->next = temp;
    temp2->prev = before;
    before->next = temp2;
}

int main() {
   insert(5);
   insert(4);
   insert(3);
   insert(2);
   insert(1);
   cout<<"The doubly linked list is: ";
   cout << endl;
   display();
   cout << endl;
   swap(head->next->next);
   cout << endl;
   display();
   cout << endl;
}




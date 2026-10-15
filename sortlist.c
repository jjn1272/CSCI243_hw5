#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node *next;
  }Node;

Node *inserted_sort(Node *head, int x){
    Node *n=malloc(sizeof(Node));
    n->value=x;
    n->next=NULL;

    if(head== NULL || x < head->value){
        n->next = head;
        return n;
    }
    Node *current=head;
    while(current->next != NULL && current->next->value<=x){
        current= current->next;
    }
    n->next =current->next;
    current->next=n;
    return head;
}


int main(void){
   Node *head=NULL;
   int count=0;
   int x;
   printf("Count: %\n",count);
}


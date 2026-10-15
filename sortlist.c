/**
*@file sortlist.c
*@brief Makes a linked list of numbers and sorts through them from least to greatest
*@author Jacob Nahui-Saune <jjn1272@rit.edu>
*@course CSCI-243 Homework 5
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node *next;
  }Node;

Node *sorting(Node *head, int x){
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
   while(scanf("%d",&x)==1){
       head=sorting(head,x);
       count++;
   }
   printf("Count: %d\n",count);
   printf("Sorted:");
   Node *current=head;
   while(current!=NULL){
       printf(" %d",current->value);
       current= current->next;
   }
   printf("\n");
   while(head!=NULL){
       Node *doomed=head;
       head=head->next;
       free(doomed);
  }
  return 0;
}








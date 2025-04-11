#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
    int val; 
    struct Node* next;
} Node;

void insertHead(Node** head, Node* new){
    new->next = *head;
    *head = new;
}

void printlist(Node* head){
    while(head != NULL){
        printf("%d-",head->val);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    Node *n4 = malloc(sizeof(Node));

    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;

    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    n4->next = NULL;


    printlist(head);

    insertHead(&head, n4);

    printlist(head);


    // Free memory (good practice)
    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}
//valgrind -- leak - check = full ./example
// leak --atExit -- ./example

#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

void printlist(struct node *head){
    struct node *temp = head;

    while(temp != NULL){
        printf("-> %d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
    
}

int main(){
    struct node node1, node2, node3;
    struct node *head;

    node1.value = 45;
    node2.value = 34;
    node3.value = 6;

    // link them up 
    head = &node1; // address of node 1
    node1.next =&node2;
    node2.next = &node3;
    node3.next = NULL;

    printlist(head);

    return 0;
}


// B 58. WAP to check whether 2 singly linked lists are same or not. 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to create the list
struct node* create_list(int n) {
    struct node *head = NULL, *temp = NULL, *new_node = NULL;

    for (int i = 0; i < n; i++) {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (!new_node) {
            printf("Memory allocation failed\n");
            return head;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &new_node->data);
        new_node->link = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            temp->link = new_node;
        }
        temp = new_node;
    }

    return head;
}

// Function to display the list
void display_list(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int compair(struct node *head1,struct node *head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->data != head2->data){
            return 0;
        }
        head1=head1->link;
        head2=head2->link;
    }
    if (head1 == NULL && head2 == NULL){
        return 1;
    }
    return 0;
}

int main() {
    int n1;
    struct node *head1 = NULL;

    printf("How many nodes do you want to create in first linked list? ");
    scanf("%d", &n1);
    head1 = create_list(n1);
    
    int n2;
    struct node *head2 = NULL;
    
    printf("How many nodes do you want to create in second linked list? ");
    scanf("%d", &n2);
    head2 = create_list(n2);
    
    display_list(head1);
    display_list(head2);

    
    if (compair(head1,head2)==1)
    {
        printf("equal");
    }
    else{
        printf("Not equal");
    }
    

    return 0;
}
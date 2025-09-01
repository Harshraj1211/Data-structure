// 57. Write a menu driven program to implement following operations on the singly
// linked list.
// • Insert a node at the front of the linked list.
// • Display all nodes.
// • Delete a first node of the linked list.
// • Insert a node at the end of the linked list.
// • Delete a last node of the linked list.
// • Delete a node from specified position.
// • count the number of nodes

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *insert_at_first(struct node *head1)
{
    int data;
    printf("Enter the data u want to insert at first node : ");
    scanf("%d", &data);

    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->link = head1;
    head1 = ptr;
    return head1;
}

void display(struct node *head1)
{
    struct node *ptr = NULL;
    ptr = head1;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

int count_nodes(struct node *head1)
{
    struct node *ptr = NULL;
    ptr = head1;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
    return count;
}

struct node *delete_firstnode(struct node *head)
{
    if (head == NULL)
        return NULL;
    struct node *ptr = head;
    head = head->link;
    free(ptr);
    return head;
}

// Delete last node
struct node *delete_endnode(struct node *head)
{
    if (head == NULL || head->link == NULL)
    {
        free(head);
        return NULL;
    }
    struct node *p = head;
    struct node *q = NULL;

    while (p->link->link != NULL)
        p = p->link;

    q = p->link;
    p->link = NULL;
    free(q);
    return head;
}
struct node *deleteAtPosition(struct node *head1, int position)
{
    struct node *ptr = head1;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        if (count == position - 1)
        {
            ptr->link = ptr->link->link;
            break;
        }
        ptr = ptr->link;
    }
    return head1;
}
int main()
{

    struct node *head1;
    head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 7;
    head1->link = NULL;

    struct node *head2;
    head2 = (struct node *)malloc(sizeof(struct node));
    head2->data = 17;
    head2->link = NULL;
    head1->link = head2;

    struct node *head3;
    head3 = (struct node *)malloc(sizeof(struct node));
    head3->data = 27;
    head3->link = NULL;
    head2->link = head3;

    head1 = deleteAtPosition(head1, 2);
    head1 = insert_at_first(head1);

    printf("Display Nodes\n");
    display(head1);

    printf("Print count of nodes : \n");
    count_nodes(head1);

    printf("\nDisplay Nodes after deleting end node :\n");
    delete_endnode(head1);
    display(head1);

    printf("\nDisplay Nodes after deleting first node :\n");
    head1 = delete_firstnode(head1);
    display(head1);

    // int choice;
    // int pos;

    // do {
    //     printf("\nMenu:\n");
    //     printf("1. Insert at front\n");
    //     printf("2. Insert at end\n");
    //     printf("3. Display list\n");
    //     printf("4. Delete first node\n");
    //     printf("5. Delete last node\n");
    //     printf("6. Delete node at position\n");
    //     printf("7. Count nodes\n");
    //     printf("8. Exit\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);

    //     switch(choice) {
    //         case 1:
    //             head1 = insert_at_first(head1);
    //             break;
    //         case 2:
    //             head1 = insert_at_end(head1);
    //             break;
    //         case 3:
    //             display(head1);
    //             break;
    //         case 4:
    //             head1 = delete_firstnode(head1);
    //             break;
    //         case 5:
    //             head1 = delete_endnode(head1);
    //             break;
    //         case 6:
    //             printf("Enter position to delete: ");
    //             scanf("%d", &pos);
    //             head1 = delete_at_position(head1, pos);
    //             break;
    //         case 7:
    //             count_nodes(head1);
    //             break;
    //         case 8:
    //             printf("Exiting...\n");
    //             break;
    //         default:
    //             printf("Invalid choice.\n");
    //     }

    // } while(choice != 8);

    return 0;
}
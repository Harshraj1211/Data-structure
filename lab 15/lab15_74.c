// 74. Write a program to simulate music player application using suitable data
// structure. There is no estimation about number of music files to be managed by
// the music player. Your program should support all the basic music player
// operations to play and manage the playlist.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char song[50];
    struct node *link;
    struct node *previous;
};
struct node *createNode()
{
    char s[20];
    printf("Enter a song : ");
    scanf("%s", s);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    strcpy(ptr->song, s);
    ptr->link = NULL;
    ptr->previous = NULL;
    return ptr;
}
void displayForward(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%s\n", ptr->song);
        ptr = ptr->link;
    }
}
void displayBackward(struct node *head3)
{
    struct node *ptr = head3;
    while (ptr != NULL)
    {
        printf("%s\n", ptr->song);
        ptr = ptr->previous;
    }
}
struct node *insertSong(struct node *head)
{
    struct node *ptr = head;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    struct node *newNode = createNode();
    ptr->link = newNode;
    newNode->previous = ptr;
    newNode->link = NULL;
    ptr = newNode;

    return newNode;
}
struct node *delete(struct node *head, int index)
{
    struct node *ptr = head;
    int count = 0;
    while (ptr->link != NULL)
    {
        count++;
        if (count == index - 1)
        {
            ptr->link->link->previous = ptr;
            ptr->link = ptr->link->link;
            break;
        }
    }
    return head;
}
int main()
{

    struct node *head = createNode();
    head->link = NULL;
    head->previous = NULL;

    struct node *head2 = createNode();
    head2->link = NULL;
    head2->previous = head;
    head->link = head2;

    struct node *head3=createNode();
    head3->link=NULL;
    head3->previous=head2;
    head2->link=head3;

    int i;

    printf("Enter 1 for add song.\n");
    printf("Enter 2 for delete song.\n");
    printf("Enter 3 for display song.\n");
    scanf("%d",&i);

    int position=0;
    switch (i)
    {
    case 1:
        insertSong(head);
        printf("Adding Song...");
        break;
    case 2:
        printf("Enter position : ");
        scanf("%d",&position);
        delete(head, position);
        printf("Deleting somg...");
        break;

    case 3:
        printf("Display song...\n");
        displayForward(head);
        break;
    default:
        displayForward(head);
        break;
    }
    
    // displayForward(head);

    return 0;
}
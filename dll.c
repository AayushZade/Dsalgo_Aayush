#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void trav(struct node *p){
    while(p!=NULL)
    {
        printf("Element is: %d\n",p->data);
        p=p->next;
    }
}

struct node * insertAtFirst(struct node * head,int data){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p->next = head;
    p->data = data;
    p->prev=head->prev;
    head->prev=p;
    return p;
}
int main()
{
    struct node *head;
    struct node *sec;
    struct node *thi;
    struct node *four;
    head = (struct node *)malloc(sizeof(struct node));
    sec = (struct node *)malloc(sizeof(struct node));
    thi = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 12;
    head->next = sec;
    sec->prev = head;
    sec->data = 10;
    sec->next = thi;
    thi->prev = sec;
    thi->data = 4;
    thi->next = four;
    four->prev = thi;
    four->data = 9;
    four->next = NULL;
    printf("Linked list before Insertion\n");
    trav(head);
    head=insertAtFirst(head,8);
    printf("Linked list after Insertion\n");
    trav(head);

    return 0;
}
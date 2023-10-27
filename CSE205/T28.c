#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void Traversal(struct Node* ptr){
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
};
struct Node * insertAtfirst(struct Node * head , int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
};
int main(){
    struct Node* head=(struct Node *)malloc(sizeof(struct Node));
    struct Node* second=(struct Node *)malloc(sizeof(struct Node));
    struct Node* third=(struct Node *)malloc(sizeof(struct Node));
    head->data=6;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=6;
    third->next=NULL;
    Traversal(head);
    head=insertAtfirst(head,56);
    Traversal(head);
    return 0;

}
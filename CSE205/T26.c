#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linkedlistTraversal(struct Node* ptr){
    while (ptr != NULL) {
        printf("%d\n ", ptr->data);   
        ptr=ptr->next;
    }
}
struct Node * insertAtbeginning(struct Node *head , int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    
    
    return ptr;
}
int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    linkedlistTraversal(head);
    head=insertAtbeginning(head, 56);
    linkedlistTraversal(head);
    return 0;
}

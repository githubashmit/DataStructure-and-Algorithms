#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linkedlistTraversal(struct Node *ptr){
    while(ptr!= NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    head->data= 8;
    head->next=second;
    second->data=9;
    second->next= third;
    third->data=10;
    third->next= fourth;
    fourth->data=11;
    fourth->next= NULL;
    linkedlistTraversal(head);
    return 0;

}
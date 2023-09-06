#include<iostream>
#include<string>
using namespace std;
struct item{
    int id;
    string name;
    int quantity;
    double price;
};
struct Node{
    item itm;
    Node* prev;
    Node* next;
};
void insert(Node** head, item , item newitem){
    Node* newnode= new Node();
    newnode->itm=newitem;
    newnode->prev=NULL;
    newnode->next=*head;
    if(*head!= NULL){
        (*head)->prev=newnode;
    }
    *head=newnode;
}
bool searchitem(Node* head, int searchid)
{
    Node* curr=head;
    while(curr!=NULL){
        if(curr->itm.id == searchid){
            return true;
        }
        curr = curr->next
    }
}
int main(){
    Node* head=NULL;
    int n, searchid;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        item newitem;
        cin>>newitem.id;
        cin>>newitem.name;
        cin>>newitem.quantity;
        cin>>newitem.price;
        insert(&head , newitem);
    }
}
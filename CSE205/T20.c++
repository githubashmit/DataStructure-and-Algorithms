#include<iostream>
using namespace std;
struct node{
    int key;
    struct node* left;
    struct node* right;
    int height;
    int count;
};
int max(int a, int b);
int height(struct node* N){
    if(N== NULL)
        return 0;
    return N-> height;
}
int max(int a, int b){
    return (a>b)? a:b;
}
struct node* newNode(int key){
    struct node* node= (struct node*) maclloc(sizeof(struct node));
    node->key = key;
    node-> left =NULL;
    node-> right = NULL;
    node-> height =1;
    node-> count =1;
    return (node);
}
struct node* rightRotate(struct node* y){
    struct node* x=y-> left;
    struct node* T2= x->right;
    x-> right =y;
    y-> left = T2;
    y-> height = max(height(y-> left), height(y->right))+1;
    x-> height = max(height(x-> left), height(x->right))+1;
    return x;
}
struct node* leftRotate(struct node* x){
    struct node* y =x-> right;
    struct node* T2 = y-> left;
    y->left = x;
    x-> right = T2;
    x-> height = max(height(x-> left) , height(x-> right ))+1;
    y->height = max(height(y-> left) , height(y-> right ))+1;
    return y;
}
int getBalance(struct node* N){
    if(N=NULL)
        return 0;
    return height(N-> left) - height (N-> right);
}
struct node* insert(struct node* node, int key){
    if(node == NULL)
        return newNode(key);
    if(key == node->key){
        (node-> count )++;
        return node;
    }
    if(key < node -> key)
        node -> left = insert(node -> left , key);
    else
        node-> right = insert (node -> right , key);
    node->height = max(height(node->left), height(node->right)) +1 ;
    int balance = getBalance (node);
    if(balance > 1 && key < node -> left -> key)
        return 
}
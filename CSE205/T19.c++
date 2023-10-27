#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int value){
    Node* newNode+ new Node();
    if(!newNode){
        return NULL;
    }
    newNode-> data = value;
    newNode-> left = newNode -> right =NULL;
    return Node;
}
Node* insertNode(Node* root , int value){
    if(root == NULL){
        return createNode(value);
    }
    if(value < root -> data){
        root -> left = 
    }
}

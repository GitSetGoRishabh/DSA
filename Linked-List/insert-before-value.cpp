#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }
};

node* convertArr2LL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

node* insertBeforeValue(node* head, int x, int val){
    node* newNode=new node(x);
    if(head==NULL) return NULL;
    if(head->data==val){
        newNode->next=head;
        return newNode;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}


int main(){
    vector<int> arr={2,5,8,7};
    node* head =  convertArr2LL(arr);
    head=insertBeforeValue(head,3,2);
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}



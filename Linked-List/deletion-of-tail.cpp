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

node* deleteTail(node* head){
    if(head==NULL) return head;
    if(head->next == NULL) return NULL;
    node* temp=head;
    while(temp->next->next){
        temp=temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

int main(){
    vector<int> arr={2,5,8,7};
    node* head =  convertArr2LL(arr);
    head=deleteTail(head);
    cout<<head;
    
}

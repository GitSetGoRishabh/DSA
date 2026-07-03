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

node* deleteK(node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    int count=0;
    while(temp){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={2,5,8,7};
    node* head =  convertArr2LL(arr);
    head=deleteK(head,2);
    cout<<head;
    
}

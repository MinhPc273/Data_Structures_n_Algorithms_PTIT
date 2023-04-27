#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
};

typedef struct node node;

node *makeNode(int x){
    node *newNode= new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head){
  while(head != NULL){
    if(head->data !=1 ) cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}

void pushFront(node *&head, int x){
  node *newNode=makeNode(x);
  newNode->next=head;
  head=newNode;
}

void pushBack(node *&head, int x){
   node *newNode=makeNode(x);
   if(head==NULL){
    head=newNode;
    return;
   }
   node *tmp=head;
   while(tmp->next != NULL) tmp=tmp->next;
   tmp->next=newNode;
}

void Inser_pos(node *&head, int pos,int x) {
   node *pre=new node();
   node *cur=new node();
   node *tmp=new node();
   cur=head;
   for(int i=1;i<pos;i++) {
    pre=cur;
    cur=cur->next;
   }
   tmp->data=x;
   pre->next=tmp;
   tmp->next=cur;
}

void delete_pos(node *&head,int pos) {
   node *cur=new node();
   node *pre=new node();
   cur=head;
   for(int i=1;i<pos;i++) {
    pre=cur;
    cur=cur->next;
   }
   pre->next=cur->next;
}


void solve(){
   node *head = NULL;
   int t; cin>>t;
   while(t--) {
    int n; cin>>n;
    pushBack(head,n);
   }
    duyet(head);
}

int main(){
  solve();
}

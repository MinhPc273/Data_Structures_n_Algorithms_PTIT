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
    cout<<head->data<<" ";
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

void popFront(node *&head){
   if(head==NULL) return;
   node *tmp=head;
   head=head->next;
   delete tmp;
}

void popBack(node *&head){
   if(head==NULL) return;
   node *tmp=head;
   while(tmp->next != NULL) tmp=tmp->next;
   node *last = tmp->next;
   tmp->next=NULL;
   delete tmp;
}

void solve(){
   node *head = NULL;
   while(1){
    cout<<"------------------------------\n";
    cout<<"1. Duyet\n";
    cout<<"2. Them dau\n";
    cout<<"3. Them cuoi\n";
    cout<<"4. Xoa dau\n";
    cout<<"5. Them tai x:\n";
    cout<<"6. Xoa tai x:\n";
    cout<<"------------------------------\n";
    int menu;
    cout<<"Lua chon: ";
    cin>>menu;
    if(menu==1){
        duyet(head);
    }
    else if(menu==2){
        int x;
        cout<<"Nhap x: ";
        cin>>x;
        pushFront(head,x);
    }
    else if(menu==3){
        int x;
        cout<<"Nhap x: ";
        cin>>x;
        pushBack(head,x);
    }
    else if(menu==4){
        popBack(head);
    }
    else if(menu==5){
        int x,val;
        cout<<"Nhap x: "; cin>>x;
        cout<<"\nNhap val: "; cin>>val;
        Inser_pos(head,x,val);
    }
    else if(menu==6) {
        int x;
        cout<<"Nhap x: "; cin>>x;
        delete_pos(head,x);
    }
   }
}

int main(){
  solve();
}

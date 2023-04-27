#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
  struct node *pre;
};

typedef struct node node;

void Insert_front(node *&head,int new_data) {
   node *newNode = new node();
   newNode->data = new_data;

   newNode->next=head;
   newNode->pre= NULL;

   if(head != NULL) {
    head->pre=newNode;
   }
   head=newNode;
}

void duyet(node *head){
    node *last;
  while(head != NULL){
    cout<<head->data<<" ";
    last = node;
    head=head->next;
  }
  if(head==NULL) cout<<"NULL";
  cout<<endl;
}

int main() {
    node *head = NULL;
   while(1){
    cout<<"------------------------------\n";
    cout<<"1. Duyet\n";
    cout<<"2. Them dau\n";
    cout<<"3. Them cuoi\n";
    cout<<"------------------------------\n";
    int menu;
    cout<<"Lua chon: ";
    cin>>menu;
    //if(menu==1)...
}

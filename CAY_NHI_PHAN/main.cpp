#include<bits/stdc++.h>
using namespace std;



typedef struct Node {
    char Infor;
    Node *left;
    Node *right;
}*Tree;

void init(Tree &T) {
   T=NULL; //dua cay ve trang thai rong
}

Tree GetNode(){
   Tree p;
   p=new Node;
   return p;
}

void FreeNode(Tree p) {
   delete p;
}

int isEmpty(Tree *T){
   if(*T==NULL) return 1;
   return 0;
}

Tree MakeNode(char x) {
  Tree p;
  p=GetNode();
  p->Infor=x;
  p->left=NULL;
  p->right=NULL;
  return p;
}



Node *Search(Tree root, int x)
{
    Tree p;
    if (root)
    {
        if (root->Infor == x) return root;
        if (root==NULL) return NULL;
        p=Search(root->left,x);
        if(p==NULL) p=Search(root->right, x);
    }
    return p;
}

Tree MakeRoot(Tree T, char x) {
    if(T==NULL) {
         Tree p;
         p=GetNode();
         p->Infor=x;
         p->left=NULL;
         p->right=NULL;
    }
  return T;
}

void AddL(Tree T, char x,char y) {
    Tree p,q;
    p=Search(T,x);
    if(p->Infor==NULL) {
        cout<<"khong ton tai x"<<endl;
        return;
    }
    else if(p->left != NULL) {
        cout<<"da ton tai nhanh trai"<<endl;
        return;
    }
    else {
        q=MakeNode(y);
        p->left=q;
    }
}

void AddR(Tree T, char x,char y) {
    Tree p,q;
    p=Search(T,x);
    if(p->Infor==NULL) {
        cout<<"khong ton tai x"<<endl;
        return;
    }
    else if(p->right != NULL) {
        cout<<"da ton tai nhanh phai"<<endl;
        return;
    }
    else {
        q=MakeNode(y);
        p->right=q;
    }
}

void Removeleft(Tree T,int x) {
  Tree p,q;
  p=Search(T,x);
  if(p==NULL){
        cout<<"khong ton tai x"<<endl;
        return ;
  }
  else if(p->left->left != NULL || p->left->right != NULL){
    cout<<"trai la mot cha, nen khong the xoa"<<endl;
    return ;
  }
  else {
    q=p->left;
    p->left=NULL;
    delete q;
  }
}

void NLR(Tree root)
{
    if (root)
    {
        cout<<root->Infor<<" ";
        NLR(root->left);
        NLR(root->right);
    }
}

void LNR(Tree root)
{
    if (root)
    {
        LNR(root->left);
        cout<<root->Infor<<" ";
        LNR(root->right);
    }
}

void LRN(Tree root)
{
    if (root)
    {
        LRN(root->left);
        LRN(root->right);
        cout<<root->Infor<<" ";
    }
}

int main() {
    Tree T;
    init(T);
    int n; cin>>n;
    char s[n*3+1];
    for(int i=0;i<n*3;i++) {
        cin>>s[i];
    }
    MakeNode(s[0]);
    for(int i=0;i<n*3;i+=3) {
        char x=s[i];
        char y=s[i+1];
        char tmp=s[i+2];
        if(tmp=='L') AddL(T,x,y);
        else AddR(T,x,y);
    }
    NLR(T);
}


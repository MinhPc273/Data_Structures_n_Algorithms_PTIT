#include<bits/stdc++.h>
using namespace std;

struct tNode{
   int data;
   tNode *pL,*pR;
};

tNode *root;

void DestroyTree(tNode *root)
{
    if(root==NULL) return;
        DestroyTree(root->pL);
        DestroyTree(root->pR);
        delete root;
}

tNode *newNode(int data){
   tNode *node= new tNode;
   node->data=data;
   node->pL=NULL;
   node->pR=NULL;
   return node;
}

void InsertNewRoot(int data) {
   tNode *node = newNode(data);
   node->pL=root;
   root=node;
}

void InsertRnode(tNode *p,int data) {
    tNode *node = newNode(data);
    if( p->pR == NULL ) p->pR=node;
    else InsertNewRoot(data);
}

void InsertLnode(tNode *p,int data) {
    tNode *node = newNode(data);
    if( p->pL == NULL ) p->pL = node;
    else InsertNewRoot(data);
}

tNode *Search(tNode *root,int x)
{
    tNode *p;
    if (root)
    {
        if (root->data == x) return root;
        if (root==NULL) return NULL;
        p=Search(root->pL,x);
        if(p==NULL) p=Search(root->pR, x);
    }
    return p;
}

void NLR(tNode *root){
	if(root!=NULL){
			if(root!=NULL){
				cout<<root->data<<" ";
			}
			NLR(root->pL);
			NLR(root->pR);
	}
}

void LNR(tNode *root){
	if(root!=NULL){
		LNR(root->pL);
		if(root!=NULL){
			cout<<root->data<<" ";
		}
		LNR(root->pR);
	}
}

void LRN(tNode *root){
	if(root!=NULL){
		LRN(root->pL);
		LRN(root->pR);
		if(root!=NULL){
			cout<<root->data<<" ";
		}
	}
}

void duyet(tNode* root) { //theo tung muc
    if (root == NULL) {
        return;
    }

    queue<tNode*> q;
    q.push(root);

    while (!q.empty()) {
        tNode* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->pL != NULL) {
            q.push(current->pL);
        }
        if (current->pR != NULL) {
            q.push(current->pR);
        }
    }
}

int main() {
   int t; cin>>t;
   while(t--){
    DestroyTree(root);
   root=NULL;
    int n; cin>>n;
   string a[n*3+1];
   for(int i=1;i<n*3+1;i++) cin>>a[i];
   InsertNewRoot(stoi(a[1]));
   for(int i=1;i<n*3+1;i+=3) {
      tNode *p=Search(root,stoi(a[i]));
      if(a[i+2]=="R") InsertRnode(p,stoi(a[i+1]));
      else InsertLnode(p,stoi(a[i+1]));
   }
   duyet(root);
   cout<<endl;
   }
}

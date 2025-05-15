#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define All(x) x.rbegin(), x.rend()
#define fi first
#define se second

const int MAX=1e6;

void FastIO();
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    };
};  

int findHeight(Node*node){
    if(!node)return 0;
    queue<Node*>qw;
    int height=0;
    qw.push(node);
    while(!qw.empty()){
        int lev=qw.size();
        for(int i=0;i<lev;i++){
            Node* x=qw.front();
            qw.pop();
            if(x->left)qw.push(x->left);
            if(x->right)qw.push(x->right);
        }
        height++;
    }
    return height-1;
}

// void Intrav(Node* node){
//     if(!node)return;
//     Intrav(node->left);
//     cout<<node->data<<" ";
//     Intrav(node->right);

// }

// void Pretrav(Node*node){
//     if(!node)return;
//     cout<<node->data<<" ";
//     Pretrav(node->left);
//     Pretrav(node->right);
// }

// void Postrav(Node*node){
//     if(!node)return;
//     Postrav(node->left);
//     Postrav(node->right);
//     cout<<node->data<<" ";
// }

// void Levtrav(Node*node){
//     if(!node)return;
//     queue<Node*>qw;
//     qw.push(node);
//     while(!qw.empty()){
//         Node* x=qw.front();
//         qw.pop();
//         cout<<x->data<<" ";
//         if(x->left)qw.push(x->left);
//         if(x->right)qw.push(x->right);
//     }
// }



// void insert(Node* &parents,int val){
//     if(!parents){
//         parents=new Node(val);
//         return ;
//     }else if(val<parents->data){
//         insert(parents->left,val);
//     }else{
//         insert(parents->right,val);
//     }
// }

// Node* a_insert(Node* root,int val){
//     if(!root){
//         root=new Node(val);
//         return root;
//     }

//     queue<Node*>q;
//     q.push(root);

//     while(!q.empty()){
//         Node* x=q.front();
//         q.pop();

//         if(!x->left){
//             x->left=new Node(val);
//             return root;
//         }else{
//             q.push(x->left);
//         }

//         if(!x->right){
//             x->right=new Node(val);
//             return root;
//         }else{
//             q.push(x->right);
//         }
//     }
// }

// void del_Deepest(Node*root,Node*delNode){
//     queue<Node*>q;
//     q.push(root);
//     Node* x;

//     while(!q.empty()){
//        x=q.front();
//        q.pop();
       
//        if(x==delNode){
//         x=nullptr;
//         delete(delNode);
//         return;
//        }

//        if(x->right){
//         if(x->right==delNode){
//             x->right=nullptr;
//             delete(delNode);
//             return;
//         }
//         q.push(x->right);
//        }

//        if(x->left){
//         if(x->left==delNode){
//             x->left=nullptr;
//             delete(delNode);
//             return;
//         }
//         q.push(x->left);
//        }
//     }
// }

// Node *a_delete(Node*root,int val){
//     if(!root){
//         return nullptr;
//     }
//     if((!root->left)&&(!root->right)){
//         if(root->data==val)return nullptr;
//         else return root;
//     }
//     queue<Node*>q;
//     q.push(root);
//     Node* keyNode=nullptr;
//     Node*x;
//     while(!q.empty()){
//         x=q.front();
//         q.pop();

//         if(x->data==val)keyNode=x;
//         if(x->left)q.push(x->left);
//         if(x->right)q.push(x->right);
//     }

//     if(keyNode!=nullptr){
//         int tmp=x->data;
//         keyNode->data=tmp;
//         del_Deepest(root,x);
//     }
//     return root;

// }

int main(){
    
    FastIO();
    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->right->right=new Node(7);

    int ans=findHeight(root);
    cout<<ans;

    return 0;
}

void FastIO(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

// int main(){
    
//     FastIO();
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     // root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7); 
//     Intrav(root);cout<<nl; // 4 2 5 1 6 3 7
//     Pretrav(root);cout<<nl; // 1 2 4 5 3 6 7
//     Postrav(root);cout<<nl; // 4 5 2 6 7 3 1
//     // insert(root->left->right,5);
//     a_insert(root,5);
//     Intrav(root);cout<<nl; // 4 2 5 1 6 3 7
//     // a_delete(root,5);
//     Intrav(root);cout<<nl; // 4 2 1 6 3 7
//     // a_insert(root,5);
//     Levtrav(root);cout<<nl;//1 2 3 4 5 6 7
//     int ans=findHeight(root);
//     cout<<ans<<nl;
//     root->right->right->right=new Node(9);
//     root->right->right->right->right=new Node(10);
//     root->right->right->right->right->right=new Node(11);
//     ans=findHeight(root);
//     cout<<ans<<nl;

//     return 0;
// }

// void FastIO(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

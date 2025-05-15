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
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=right=nullptr;
    };
};

bool isBST(Node*root,Node*minNode,Node*maxNode){
    if(!root)return true;
    if(minNode&&root->data<=minNode->data)return false;
    if(maxNode&&root->data>=maxNode->data)return false;
    return isBST(root->left,minNode,root)&&isBST(root->right,root,maxNode);

}

int main(){
    Node*root=new Node(3);
    root->left=new Node(5);
    root->right=new Node(2);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    FastIO();
    bool ans=isBST(root,nullptr,nullptr);
    cout<< (ans?"YES":"NO");
    return 0;
}

void FastIO(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

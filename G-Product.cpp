#include<bits/stdc++.h>
using namespace std;
struct Node{
    int l;
    int r;
    int val;
    Node* left;
    Node* right;
};

Node* create_node(int l, int r, vector<int> L){
    Node* node;
    if(l == r){
        node->val = L[l];
        return node;
    }
    node->left = create_node(l, (l+r)/2, L);
    node->right = create_node(((l+r)/2)+1, r, L);
    node->val = node->left->val + node->right->val;
    return node;
}

void set_node(Node* node, int i, int x){
    if( node->l == node->r){
        node->val = x;
        return;
    }
    if (i <= (node->l+node->r)/2){
        set_node(node->left, i, x);
    }else{
        set_node(node->right, i, x);
    }
    node->val = node->left->val+node->right->val;
}

int query(Node* node, int l, int r){
    if (node->l == l && node->r == r){
        return node->val;
    }
    int mid = (node->l+node->r)/2;
    if (r <= mid){
        return query(node->left, l, r);
    }else if(l > mid){
        return query(node->right, l,r);
    }else{
        return query(node->left, l, mid)+query(node->right, mid+1, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K, a;
    int cs = 1;
    while(cin >> N, N != 0){
        vector<int> L(N);
        for(int i = 0; i < N; i++){
            cin >> L[i];
        }
        string cmd;
        int i, j;
        Node* root = create_node(0, N-1, L);
        cout <<"Case "<< (cs++)<< ":\n"; 
        while(cin >> cmd, cmd != "END"){
            cin >> i >> j;
            if( cmd == "M"){
                cout << query(root, i-1, j-1) << '\n';
            }else{
                set_node(root, i-1, j);
            }
        }
        cout<< '\n';
    }
    return 0;
}
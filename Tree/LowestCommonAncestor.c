// we have pass the root node and the integer values of the two nodes which we want to find the lowest common ancestor



 Node *lca(Node *root, int v1,int v2) {
        if(root==NULL) return NULL;
        if((root->data==v1)||(root->data==v2)) {
            return root;
        }
		Node * left = lca(root->left,v1,v2);
        Node * right = lca(root->right,v1,v2);
        if(left==NULL&&right==NULL) return NULL;
        else if(left==NULL&&right!=NULL) return right;
        else if(left!=NULL&&right==NULL) return left;
        else return root;
    }

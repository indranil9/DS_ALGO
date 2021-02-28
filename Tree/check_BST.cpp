
// the root node is passed check weather the tree is a binary search tree or not
// The properties of the BST are as follows:
//The  data value of every node in a node's left subtree is less than the data value of that node.
//The  data value of every node in a node's right subtree is greater than the data value of that node.
//The  data value of every node is distinct


void inorder(Node*root,vector<int>&v){
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
	bool checkBST(Node* root) {
        vector<int>v1;
        inorder(root,v1);
        int f = 0;
        for(int i = 0 ; i < v1.size()-1;i++){
            if(v1[i]>=v1[i+1]){
                f=1;
                break;
            }
        }
        if(f==1) return false;
        else return true;
	}
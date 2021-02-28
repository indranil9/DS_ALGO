

//The root node is passed return the height of the tree


int getHeight(struct node* root) {
    // Write your code here
    if(root==NULL) return 0;
    else if((root->left==NULL)&&(root->right==NULL)) return 0;
    return fmax(1 + getHeight(root->left),1 + getHeight(root->right));
}
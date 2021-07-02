

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
        if(root==NULL){
            return NULL;
        }
        if(root->data==v1|| root->data==v2){
            return root;
        }
        Node *leftlca=lca(root->left,v1,v2);
        Node *rightlca=lca(root->right,v1,v2);
        if(leftlca&&rightlca){
            return root;
        }
        if(leftlca!=NULL){
            return leftlca;
        }
        return rightlca;
		// Write your code here.
    }


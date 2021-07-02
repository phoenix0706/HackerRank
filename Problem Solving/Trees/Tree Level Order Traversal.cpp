
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if(root==NULL){
            return;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node *node=q.front();
            q.pop();
            
            if(node!=NULL){
                cout<<node->data<<" ";
            
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
           if(!q.empty()){
                q.push(NULL);
            }
            }
        }


    }


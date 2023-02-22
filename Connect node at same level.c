// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *next;
};

void connect(struct TreeNode* root) {
    if (!root) {
        return;
    }
    
    // Create a queue to perform level-order traversal.
    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 10000);
    int front = 0, rear = 0;
    queue[rear++] = root;
    
    // Keep track of the last visited node on the current level.
    struct TreeNode* prev = NULL;
    
    while (front < rear) {
        int levelSize = rear - front;
        prev = NULL;
        
        // Traverse all nodes on the current level.
        for (int i = 0; i < levelSize; i++) {
            struct TreeNode* curr = queue[front++];
            
            if (prev) {
                prev->next = curr;
            }
            prev = curr;
            
            if (curr->left) {
                queue[rear++] = curr->left;
            }
            if (curr->right) {
                queue[rear++] = curr->right;
            }
        }
    }
    
    free(queue);
}

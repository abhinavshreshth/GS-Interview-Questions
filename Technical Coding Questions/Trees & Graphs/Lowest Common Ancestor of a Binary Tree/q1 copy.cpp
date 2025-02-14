#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int x) {
    val = x;
    left = NULL;
    right = NULL;
  }
};

class Solution {
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    // Base case: if root is NULL or root is one of p or q
    if (root == NULL || root == p || root == q)
      return root;

    // Recursively search in left and right subtrees
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);

    // If both left and right return non-null, root is LCA
    if (left && right)
      return root;

    if (left) {
      return left;
    } else {
      return right;
    }
  }
};

// Helper function to create a sample tree
TreeNode *createSampleTree() {
  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(5);
  root->right = new TreeNode(1);
  root->left->left = new TreeNode(6);
  root->left->right = new TreeNode(2);
  root->right->left = new TreeNode(0);
  root->right->right = new TreeNode(8);
  root->left->right->left = new TreeNode(7);
  root->left->right->right = new TreeNode(4);
  return root;
}

// Driver code to test LCA function
int main() {
  TreeNode *root = createSampleTree();
  Solution sol;

  TreeNode *p = root->left;  // Node with value 5
  TreeNode *q = root->left->right->right; // Node with value 4

  TreeNode *lca = sol.lowestCommonAncestor(root, p, q);
  cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val
       << endl;

  return 0;
}

#ifndef TEST_BINARY_TREE_H_
#define TEST_BINARY_TREE_H_

#include <iostream>
#include <stack>
#include <list>
#include <vector>

namespace test {

struct TreeNode {
   int val;
   struct TreeNode *left;
   struct TreeNode *right;
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
  
class BinaryTree {        
 public:
	BinaryTree() = default;
	BinaryTree(const std::vector<int>& data);

	bool CreateBinaryTree(const std::vector<int>& data);

	std::vector<int> PreOrderTraversal(TreeNode* root);
   std::vector<int> PostOrderTraversalNotRecursive(TreeNode* root);

 private:
  BinaryTree* root_;
};

}  // namespace test

#endif  // TEST_BINARY_TREE_H_
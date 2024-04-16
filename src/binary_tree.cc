#include "binary_tree.h"

#include <iostream>
#include <stack>
#include <list>

namespace test
{

  BinaryTree::BinaryTree(const std::vector<int> &data)
  {
  }

  bool BinaryTree::CreateBinaryTree(const std::vector<int>& data) {
    
  }
  std::vector<int> BinaryTree::PreOrderTraversal(TreeNode *root)
  {
    return std::vector<int>();
  }

  bool BinaryTree::CreateBinaryTree(const std::vector<int> &data)
  {
    return false;
  }

  std::vector<int> BinaryTree::PostOrderTraversalNotRecursive(TreeNode *root)
  {
    std::vector<int> result;
    std::stack<TreeNode *> st;
    auto cur = root;
    decltype(root) prev = nullptr;

    while (cur || !st.empty())
    {
      while (cur)
      {
        st.push(cur);
        cur = cur->left;
      }

      auto top = st.top();
      if (top->right == nullptr || top->right == prev)
      {
        // 访问节点
        result.push_back(top->val);
        st.pop();
        prev = top;
      }
      else
      {
        cur = top->right;
      }
    }

    return result;
  }
} // namespace test

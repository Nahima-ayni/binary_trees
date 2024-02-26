# Understanding Binary Trees and Binary Search Trees

## Binary Tree

A **binary tree** is a fundamental data structure in computer science composed of nodes, where each node has at most two children, typically referred to as the left child and the right child. Nodes in a binary tree are connected through edges, forming a hierarchical structure.

## Binary Search Tree (BST)

A **Binary Search Tree (BST)** is a specific type of binary tree in which the left child of a node contains values less than the node's value, and the right child contains values greater than the node's value. This property enables efficient searching, insertion, and deletion operations.

## Difference between Binary Tree and BST

While both are binary trees, the key difference lies in the organization of nodes. A binary tree has no specific order among its elements, while a BST maintains the order property, facilitating faster search operations.

## Gain in Time Complexity Compared to Linked Lists

In terms of time complexity, binary trees offer significant advantages over linked lists, particularly for search, insertion, and deletion operations. Binary trees, especially BSTs, provide logarithmic time complexity (\( O(\log n) \)) for these operations, compared to linear time complexity (\( O(n) \)) in linked lists.

## Properties of Binary Trees

- **Depth**: The depth of a node is the length of the path from the root to that node.
- **Height**: The height of a tree is the length of the longest path from the root to a leaf node.
- **Size**: The size of a binary tree is the total number of nodes in the tree.

## Traversal Methods for Binary Trees

There are several ways to traverse a binary tree:

1. **Inorder Traversal**: Visit left subtree, then the root, and finally the right subtree.
2. **Preorder Traversal**: Visit the root, then the left subtree, and finally the right subtree.
3. **Postorder Traversal**: Visit left subtree, then the right subtree, and finally the root.

## Types of Binary Trees

- **Complete Binary Tree**: Every level of the tree is fully filled except possibly for the last level, which is filled from left to right.
- **Full Binary Tree**: Every node has either zero or two children.
- **Perfect Binary Tree**: All interior nodes have two children, and all leaves are at the same level.
- **Balanced Binary Tree**: The height of the left and right subtrees of any node differs by at most one.

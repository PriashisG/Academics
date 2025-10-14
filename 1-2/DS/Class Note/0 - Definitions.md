# Binary Search Tree

- A Binary Search Tree (BST) is a binary tree in which, for each node, all keys in the left subtree are smaller and all keys in the right subtree are larger than the node’s key.
- **use case:** Dictionary

# AVL Search Tree

- **AVL Search Tree:** An **AVL Search tree** is a self-balancing binary search tree (BST) in which the balance factor of every node is either$\text{−1, 0, or +1}$.
- **Balance Factor:** The balance factor of a node in an AVL tree is the difference between the height of its left subtree and the height of its right subtree.
- **Rotation:** A rotation in an AVL tree is an operation used to rebalance the tree when it becomes unbalanced.
- **use case:** Network Routers(stored IP address to find quickly).

# M-way Search Tree

- **M-Way Search Tree:** An M-Way Search Tree is a generalization of a BST where each node has up to $M$ children and $M−1$ sorted keys, with subtrees holding values in the key ranges.

# B-tree

- **B-tree:** > A B-Tree is a self-balancing M-way search tree designed to keep data sorted and allow efficient insertion, deletion, and search operations.

# Heap

- **Heap:** A heap is a complete binary tree where each node satisfies the heap property:
	- in a **max-heap** the $parent \ge children$
	- in a **min-heap** the $parent \le children$.
- **Max Heap:** A heap where each parent node is greater than or equal to its children.
- **Min Heap:** A heap where each parent node is less than or equal to its children.
- **use case:** CPU task scheduling(priority wise sort the tasks).
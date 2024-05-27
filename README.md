# Tree and Graph Data Structures

## Introduction

This README provides an overview of two fundamental data structures: Trees and Graphs. Understanding these structures is crucial for solving various computational problems efficiently.

## Table of Contents
1. [Trees](#trees)
    - [Definition](#definition)
    - [Types of Trees](#types-of-trees)
    - [Tree Operations](#tree-operations)
2. [Graphs](#graphs)
    - [Definition](#definition-1)
    - [Types of Graphs](#types-of-graphs)
    - [Graph Operations](#graph-operations)
3. [Applications](#applications)
4. [Conclusion](#conclusion)

## Trees

### Definition
A **tree** is a hierarchical data structure consisting of nodes connected by edges. It has the following properties:
- One node is designated as the root.
- Each node has zero or more child nodes.
- No node has more than one parent, except the root which has no parent.
- A tree with `n` nodes has `n-1` edges.

### Types of Trees
1. **Binary Tree**: Each node has at most two children, referred to as the left child and the right child.
2. **Binary Search Tree (BST)**: A binary tree where the left child contains values less than the parent node and the right child contains values greater than the parent node.
3. **Balanced Tree**: A tree where the height difference between the left and right subtrees for any node is minimal, such as AVL trees and Red-Black trees.
4. **Complete Binary Tree**: All levels, except possibly the last, are fully filled, and all nodes are as far left as possible.
5. **N-ary Tree**: A tree in which a node can have at most `n` children.

### Tree Operations
- **Insertion**: Adding a new node to the tree.
- **Deletion**: Removing a node from the tree.
- **Traversal**: Visiting all the nodes in a specific order.
  - **Pre-order Traversal**: Visit the root, then the left subtree, and finally the right subtree.
  - **In-order Traversal**: Visit the left subtree, the root, and then the right subtree.
  - **Post-order Traversal**: Visit the left subtree, the right subtree, and finally the root.
  - **Level-order Traversal**: Visit nodes level by level from left to right.

## Graphs

### Definition
A **graph** is a collection of nodes (vertices) and edges that connect pairs of nodes. Graphs are used to model relationships between objects.

### Types of Graphs
1. **Undirected Graph**: Edges have no direction. The edge (u, v) is identical to the edge (v, u).
2. **Directed Graph (Digraph)**: Edges have a direction. The edge (u, v) is different from the edge (v, u).
3. **Weighted Graph**: Edges have weights associated with them.
4. **Unweighted Graph**: Edges do not have weights.
5. **Cyclic Graph**: Contains at least one cycle (a path that starts and ends at the same vertex).
6. **Acyclic Graph**: Does not contain any cycles.
7. **Connected Graph**: There is a path between every pair of vertices.
8. **Disconnected Graph**: There is at least one pair of vertices with no path between them.

### Graph Operations
- **Traversal**: Visiting all vertices in the graph.
  - **Depth-First Search (DFS)**: Visits as far as possible along each branch before backtracking.
  - **Breadth-First Search (BFS)**: Visits all neighbors of a vertex before moving to the next level neighbors.
- **Shortest Path**: Finding the shortest path between two vertices.
  - Algorithms: Dijkstra’s, Bellman-Ford, Floyd-Warshall
- **Minimum Spanning Tree (MST)**: Finding a subset of edges that connect all vertices with the minimum total edge weight.
  - Algorithms: Kruskal’s, Prim’s
- **Topological Sorting**: Linear ordering of vertices for a directed acyclic graph (DAG).

## Applications
- **Trees**: Used in databases, file systems, decision-making processes, and for efficient searching and sorting.
- **Graphs**: Used in network routing, social network analysis, recommendation systems, and solving puzzles and games.

## Conclusion
Trees and graphs are versatile and widely used data structures in computer science. Understanding their properties, types, and operations is fundamental for designing efficient algorithms and solving complex problems.

## Prepared BY
**Elijah Malewo**

**OD22COE Reg:220222486041**
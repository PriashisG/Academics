**Linked list is a linear collection of data elements, called node, where the linear order is given by means of pointer.**

## Create a Linked List

- By array
- By struct

#### Method - 01: Using Array

We need two array to implement linked list.
- One array is for the infos which are store in that node.
- Another is for storing the index of next node.

#### Method - 02: Using Struct

```cpp
struct node{
	char info;
	struct node *link;
};
struct node *start = NULL;
```

## Traversing a Linked List


## Searching a Linked List

## Memory Allocation: Garbage Collection

- **List of available space / Free storage list / Free pool:** It is a list which maintained which consists of unused memory cells.

## Deletion from a Linked List


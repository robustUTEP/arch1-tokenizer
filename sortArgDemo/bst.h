#include "stdio.h"

// struct for BST node
typedef struct BNode_s {
  struct BNode_s *children[2];
  char *str;
} BstNode;

// Root of the tree
BstNode *bstRoot;

// Basic BST functions
void bstInsert(BstNode **rootp, char *str);
void bstPrint(BstNode *root);
void bstClear(BstNode **rootp);

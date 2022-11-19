  void mirror(struct Node* node)
{
    if (node == NULL)
        return;
    else {
        struct Node* temp;
 
        /* do the subtrees */
        mirror(node->left);
        mirror(node->right);
 
        /* swap the pointers in this node */
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}
int identicalTrees(Node* a, Node* b)
{
    /*1. both empty */
    if (a == NULL && b == NULL)
        return 1;
 
    /* 2. both non-empty -> compare them */
    if (a != NULL && b != NULL) {
        return (a->data == b->data
                && identicalTrees(a->left, b->left)
                && identicalTrees(a->right, b->right));
    }
 
    /* 3. one empty, one not -> false */
    return 0;
}
    bool areAnagrams(Node *root1, Node *root2)
    {
       mirror(root1);
      if (identicalTrees(root1, root2))
        return 1;
          else
        return 0;
    }

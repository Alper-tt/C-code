#include <stdio.h>
#include <stdlib.h>

typedef struct n
{
    int data;
    struct n *right;
    struct n *left;
} n;

typedef n node;

node *newNode(node *tree, int x)
{
    if (tree == NULL)
    {
        node *root = (node *)malloc(sizeof(node));
        root->right = NULL;
        root->left = NULL;
        root->data = x;
        return root;
    }
    if (tree->data < x)
    {
        tree->right = newNode(tree->right, x);
        return tree;
    }
    tree->left = newNode(tree->left, x);
    return tree;
}

void travers(node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    travers(tree->left);
    printf("%d ", tree->data);
    travers(tree->right);
}

int find(node *tree, int x)
{
    if (tree == NULL)
    {
        return -1;
    }
    if (tree->data == x)
    {
        return 1;
    }

    if (find(tree->left, x) == 1)
        return 1;
    if (find(tree->right, x) == 1)
        return 1;
    return -1;
}

int max(node *tree)
{
    while (tree->right != NULL)
        tree = tree->right;
    return tree->data;
}
int min(node *tree)
{
    while (tree->left != NULL)
        tree = tree->left;
    return tree->data;
}

int findParent(node *r)
{
    if (r == NULL)
    {
        return 0;
    }
    if (r->left == NULL && r->right == NULL)
    {
        return 0;
    }
    else
    {
        int x = findParent(r->right);
        int y = findParent(r->left);
        return x + y + 1;
    }
}

void main()
{
    node *tree = NULL;
    tree = newNode(tree, 25);
    tree = newNode(tree, 20);
    tree = newNode(tree, 30);
    tree = newNode(tree, 40);
    tree = newNode(tree, 16);
    tree = newNode(tree, 18);



    travers(tree);
    printf("\n%d is the max, %d is the min", max(tree), min(tree));

    printf("\n--%d--", findParent(tree));
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *insert(node *tree, int x)
{

    if (tree == NULL)
    {
        node *root = (node *)malloc(sizeof(struct node));
        root->left = root->right = NULL;
        root->data = x;
        return root;
    }

    if (tree->data < x)
    {
        tree->right = insert(tree->right, x);
        return tree;
    }
    tree->left = insert(tree->left, x);
    return tree;
}

void travers(node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        travers(tree->left);
        printf("%d ", tree->data);
        travers(tree->right);
    }
}

int find(node *tree, int x)
{
    if (tree == NULL)
        return -1;

    if (tree->data == x)

        return 1;

    if (find(tree->right, x) == 1)
        return 1;

    if (find(tree->left, x) == 1)
        return 1;
    return -1;
}

int findMin(node *tree)
{
    if (tree == NULL)
        return -1;

    while (tree->left != NULL)
    {
        tree = tree->left;
    }
    return tree->data;
}
int findMax(node *tree)
{
    if (tree == NULL)
        return -1;

    while (tree->right != NULL)
    {
        tree = tree->right;
    }
    return tree->data;
}

node *deletion(node *tree, int x)
{
    if (tree == NULL)
    {
        return NULL;
    }
    if (tree->data == x)
    {
        if (tree->left == NULL && tree->right == NULL)
        {
            return NULL;
        }
        if (tree->right != NULL)
        {
            tree->data = findMin(tree->right);
            tree->right = deletion(tree->right,findMin(tree->right));
            return tree;
        }
        tree->data = findMax(tree->left);
        tree->left = deletion(tree->left, findMax(tree->left));
        return tree;
    }
    if(tree->data<x){
        tree->right = deletion(tree->right,x);
        return tree;
    }
    tree->left = deletion(tree->left,x);
    return tree;
}

int main()
{
    node *tre = NULL;
    tre = insert(tre, 3);
    tre = insert(tre, 34);
    tre = insert(tre, 35);
    tre = insert(tre, 343);
    tre = insert(tre, 232);
    tre = insert(tre, 432);
    travers(tre);
    tre = deletion(tre,232);
    printf("(search result: %d)\n", find(tre, 35));
    printf("(min value: %d)\n", findMin(tre));
    printf("(max value: %d)\n", findMax(tre));
    travers(tre);
}
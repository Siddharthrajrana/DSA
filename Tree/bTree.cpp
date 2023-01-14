#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
node *search(node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}
node *inorderSccc(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
}

int main()
{
    node *root = NULL;
    int choice, data;

    while (choice != 5)
    {
        printf("\n\n1. Create Binary Tree\n2.Inorder Traversal \n3.Preorder Travresal \n4.Postorder Traversal \n5.Exit \n6.Search \n7.Delete");
        cout << "\nEnter your choice "
             << ": ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to Enter : ";
            cin >> data;
            root = insertBST(root, data);
            break;

        case 2:
            cout << "Inorder Traversal is as :";
            inOrder(root);
            break;

        case 3:
            cout << "Preorder Traversal as : ";
            preOrder(root);
            break;

        case 4:
            cout << "Postorder Traversal as : ";
            postOrder(root);
            break;

        case 5:
            cout << "OK! Exit ";
            break;

        case 6:
            cout << "Enter the value to search : ";
            cin >> data;
            if (search(root, data) == NULL)
                cout << "Key not found ";
            else
                cout << "Key found ";
            break;

        case 7:
            cout << "Enter the value to delete : ";
            cin >> data;
            // deleteNode(root,data);
            break;

        default:
            cout << "Please Enter the valid choice";
            break;
        }
    }
}
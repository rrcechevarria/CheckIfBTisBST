#include "CheckBTifBST.h"

using namespace std;
vector<int> num;

void isBST(node* root)
{
    if (root == NULL)
        return;
    isBST(root->left);
    num.push_back(root->data);
    isBST(root->right);
}




int main() 
{
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(6);
    isBST(root);

    if (is_sorted(num.begin(), num.end()))
    {
        cout << "BT is BST";
    }
    else
    {
        cout << "BT is not BST";
    }
    _getch();
	return 0;
}
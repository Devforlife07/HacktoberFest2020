#include<bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
	int data; 
	struct Node* left; 
	struct Node* right; 
}; 

struct Node* newNode(int data) 
{ 
	struct Node* node = (struct Node*) 
						malloc(sizeof(struct Node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	
	return(node); 
} 


void BST::case_c(node *par, node *loc)
{
    node *ptr, *ptrsave, *suc, *parsuc;
    ptrsave = loc;
    ptr = loc->right;
    while (ptr->left != NULL)
    {
        ptrsave = ptr;
        ptr = ptr->left;
    }
    suc = ptr;
    parsuc = ptrsave;
    if (suc->left == NULL && suc->right == NULL)
        case_a(parsuc, suc);
    else
        case_b(parsuc, suc);
    if (par == NULL)
    {
        root = suc;
    }
    else
    {
        if (loc == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}
 


void mirror(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	else
	{ 
		struct Node* temp; 
		
		mirror(node->left); 
		mirror(node->right); 
	
		temp	 = node->left; 
		node->left = node->right; 
		node->right = temp; 
	} 
} 

void inOrder(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	
	inOrder(node->left); 
	cout << node->data << " "; 
	inOrder(node->right); 
} 

int main() 
{ 
	struct Node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	/* Print inorder traversal of the input tree */
	cout << "Inorder traversal of the constructed"
		<< " tree is" << endl; 
	inOrder(root); 
	
	/* Convert tree to its mirror */
	mirror(root); 
	
	/* Print inorder traversal of the mirror tree */
	cout << "\nInorder traversal of the mirror tree"
		<< " is \n"; 
	inOrder(root); 
	
	return 0; 
} 


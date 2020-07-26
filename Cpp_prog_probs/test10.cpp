


# include <iostream>
# include <deque>
# include "main.h"
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int test10(){
	TreeNode LR{ 5 };
	TreeNode L1{ 4 };
	TreeNode R1{ 8 };
	TreeNode L2{ 11 };
	TreeNode L3{ 13 };
	TreeNode R2{ 4 };
	TreeNode L4{ 7 };
	TreeNode R3{ 2 };
	TreeNode R4{ 1 };

	LR.left = &L1;
	LR.right = &R1;
	L1.left = &L2;
	R1.left = &L3;
	R1.right = &R2;
	L2.left = &L4;
	L2.right = &R3;
	R2.right = &R4;


    TreeNode* root = &LR;
    int sum = 22;
    deque<TreeNode*> s;
    int res = root->val;


    s.push(root);
    TreeNode* curNode = root;
    while (not s.empty())
    {
        if (res != sum)
        {
            if (curNode->left)
            {
                curNode = curNode->left;
                s.push(curNode);
                res += curNode->val;
            }
            else if (curNode->right)
            {
                curNode = curNode->right;
                s.push(curNode);
                res += curNode->val;
            }
            else
            {
                res -= curNode->val;
                curNode = s.top();
                s.pop();
            }
            cout << res << endl;
        }
        else
        {
            return true;
        }
    }
    return false;



	return 0;
}
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		if (pre.empty() || pre.size() != vin.size())
		{
			return nullptr;
		}
		size_t rootindex = 0;
		for (; rootindex < vin.size(); ++rootindex)
		{
			if (pre[0] == vin[rootindex])
			{
				break;
			}
		}
		vector<int> leftpre, leftvin, rightpre, rightvin;
		for (int i = 0; i < rootindex; ++i)
		{
			leftpre.push_back(pre[i + 1]);
			leftvin.push_back(vin[i]);
		}
		for (int i = rootindex + 1; i < pre.size(); ++i)
		{
			rightpre.push_back(pre[i]);
			rightvin.push_back(vin[i]);
		}
		TreeNode* root = new TreeNode(pre[0]);
		root->left = reConstructBinaryTree(leftpre, leftvin);
		root->right = reConstructBinaryTree(rightpre, rightvin);
		return root;
	}
};
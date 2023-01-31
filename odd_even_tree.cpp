#include <bits/stdc++.h>
using namespace std;
struct Node {
	int val;
	vector<Node*> children;
};
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->val = val;
	return temp;
}
int evenOddLevelDifference(Node* root)
{
	int evenSum = 0, oddSum = 0;
	queue<pair<Node*, int> > q;
	q.push({ root, 1 });
	while (!q.empty()) {
		pair<Node*, int> currNode
			= q.front();
		q.pop();
		int currLevel
			= currNode.second;
		int currVal
			= currNode.first->val;

	if (currLevel % 2)

			// Add to odd sum
			oddSum += currVal;
		else

			// Add to even sum
			evenSum += currVal;

		for (auto child : currNode.first->children) {
			q.push({ child, currLevel + 1 });
		}
	}return (oddSum - evenSum); }
int main()
{
	// Create the N-ary Tree
	Node* root = newNode(4);
	root->children.push_back(newNode(2));
	root->children.push_back(newNode(3));
	root->children.push_back(newNode(-5));
	root->children[0]->children.push_back(newNode(-1));
	root->children[0]->children.push_back(newNode(3));
	root->children[2]->children.push_back(newNode(-2));
	root->children[2]->children.push_back(newNode(6));

	cout << evenOddLevelDifference(root);

	return 0;
}


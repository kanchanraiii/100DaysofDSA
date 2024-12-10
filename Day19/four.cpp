#include <iostream>
#include <vector>
#include <queue>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> zigzagLevelOrder(Node* root) {
    vector<vector<int>> result;
    if (root == NULL) return result;

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> level;

        for (int i = 0; i < levelSize; i++) {
            Node* currentNode = q.front();
            q.pop();
            level.push_back(currentNode->data);

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }

        // Reverse the level if needed (for zigzag)
        if (!leftToRight) {
            reverse(level.begin(), level.end());
        }

        result.push_back(level);
        leftToRight = !leftToRight;  // Toggle the direction for next level
    }

    return result;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector<vector<int>> result = zigzagLevelOrder(root);

    // Output the result
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

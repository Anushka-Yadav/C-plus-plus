#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;

Node* buildtree(int node[]) {
    idx++;
    if (node[idx] == -1) {
        return NULL;
    }
    int data = node[idx];
    Node* root = new Node(data);
    root->left = buildtree(node);
    root->right = buildtree(node);

    return root;
}

int main() {
    int node[] = {1, 2, 3, -1, -1, 4, 5, 6, -1, 3, -1, 7, -1, 8, 9};
    Node* root = buildtree(node);
    cout << root->data << endl;

    return 0;
}
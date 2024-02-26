#include <iostream>
using namespace std;

#define MAX_SIZE 100

int tree[MAX_SIZE];

void preorderTraversal(int index) {
    if (tree[index] == -1)
        return;
    cout << tree[index] << " ";
    preorderTraversal(2 * index + 1);
    preorderTraversal(2 * index + 2);
}

void inorderTraversal(int index) {
    if (tree[index] == -1)
        return;
    inorderTraversal(2 * index + 1);
    cout << tree[index] << " ";
    inorderTraversal(2 * index + 2);
}

void postorderTraversal(int index) {
    if (tree[index] == -1)
        return;
    postorderTraversal(2 * index + 1);
    postorderTraversal(2 * index + 2);
    cout << tree[index] << " ";
}

int main() {
    // Initializing tree with example values
    tree[0] = 1;
    tree[1] = 2;
    tree[2] = 3;
    tree[3] = 4;
    tree[4] = 5;
    tree[5] = 6;
    tree[6] = 7;
    for (int i = 7; i < MAX_SIZE; ++i) {
        tree[i] = -1; // Marking remaining elements as empty (-1)
    }

    cout << "Preorder traversal: ";
    preorderTraversal(0);
    cout << endl;

    cout << "Inorder traversal: ";
    inorderTraversal(0);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(0);
    cout << endl;

    return 0;
}

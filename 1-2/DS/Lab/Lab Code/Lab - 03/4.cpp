#include <bits/stdc++.h>
using namespace std;

struct Node {
    char info;
    Node* link;
};

Node* createNode(char value) {
    Node* newNode = new Node;
    newNode->info = value;
    newNode->link = nullptr;
    return newNode;
}

void trav(Node* start) {
    Node* ptr = start;
    while (ptr != nullptr) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int main() {
    Node* start = createNode('U');
    start->link = createNode('E');
    start->link->link = createNode('C');
    start->link->link->link = createNode('R');
    start->link->link->link->link = createNode('T');
    start->link->link->link->link->link = createNode('E');
    start->link->link->link->link->link->link = createNode('S');

    trav(start);

    Node* ptr = start;
    while (ptr != nullptr) {
        Node* temp = ptr;
        ptr = ptr->link;
        delete temp;
    }

    return 0;
}

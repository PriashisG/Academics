#include <bits/stdc++.h>
using namespace std;

int size = 10;
char info[size] = {};
int next[size] = {2, 3, 4, 5, 6, 7, 8, 9, 1, -1};
int start = -1;
int available = 0;

int new_node(){
    if (!available){
        cout << "Overflow\n";
        return - 1;
    }
    int new_index = available;
    available = next[available];
    return new_index;
}

void create_list(){
    int ptr = -1;
    for (int i = 0; i < size - 1; i++){
        int new_index = new_node();
        if (new_index == -1) break;
        char data;
        cin >> data;
        info[new_index] = data;
        link[]
    }
}

void traverse_list(){
    int ptr = start;
    
}

int main(void){
    create_list();
    traverse_list();
}

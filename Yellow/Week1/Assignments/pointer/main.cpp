#include <iostream>
#include <stack>
using namespace std;

#pragma region Pointers
void f() {
    static int count = 0;
    ++count;
    int y = 5;
    cout << "In front of y: " << *(&y + 4) << endl;
}
/*
int main() {
    int x = 7;
    cout << &x << endl;
    {
        int x = 8;
        cout << *(&x+1) << endl;
    }
    f();
    cout << *(&x-1) << endl;
    int* i = new int;
    cout << *i;
    return 0;
}*/
/*
int main() {
    int a[100];
    for (auto& item : a)
        item = 0;
    int* p = a;
    a[1] = 2;
    p[2] = 3;
    5[p] = 654;
    *(a+4) = 45;
    p = new int[100];
    for (const auto& item : a) {
        cout << item << " ";
    }
    cout << endl << *(p-2) <<endl;
}*/
#pragma endregion
#pragma region Kind of memory


void g(const int& x) {
    static int k = 0;
    int f = 0;
    int f1 = 2;
    cout << "Reference for local variable (in stack): " << &k << endl;
    cout << "Difference between local (stack) and static (static memory) references: " << &x - &k << endl;
    cout << "Difference between local and local: " << &x - &f << endl;
    cout << *(&f1-6) << endl;
}

/*int main() {
    int x = 2;
    int* f = new int(1);
    int* l = new int(1);
    cout << "Difference between dynamic memory and stack: " << f - &x << endl;
    cout << "Difference between dynamic memory and dynamic memory: " << f - l << endl;
    int i = 1;
    g(1);
    return 0;
}*/



#pragma endregion
#pragma region Try to trie
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The number of children for each node
// We will construct a N-ary tree and make it
// a Trie
// Since we have 26 english letters, we need
// 26 children per node
#define N 33

typedef struct TrieNode TrieNode;

struct TrieNode {
    // The Trie Node Structure
    // Each node has N children, starting from the root
    // and a flag to check if it's a leaf node
    char data; // Storing for printing purposes only
    TrieNode* children[N];
    int is_leaf;
};

TrieNode* make_trienode(char data) {
    // Allocate memory for a TrieNode
    TrieNode* node = (TrieNode*) calloc (1, sizeof(TrieNode));
    for (int i=0; i<N; i++)
        node->children[i] = NULL;
    node->is_leaf = 0;
    node->data = data;
    return node;
}

void free_trienode(TrieNode* node) {
    // Free the trienode sequence
    for(int i=0; i<N; i++) {
        if (node->children[i] != NULL) {
            free_trienode(node->children[i]);
        }
        else {
            continue;
        }
    }
    free(node);
}

TrieNode* insert_trie(TrieNode* root, char* word) {
    // Inserts the word onto the Trie
    // ASSUMPTION: The word only has lower case characters
    TrieNode* temp = root;

    for (int i=0; word[i] != '\0'; i++) {
        // Get the relative position in the alphabet list
        int idx = (int) word[i] - 'а';
        if (temp->children[idx] == NULL) {
            // If the corresponding child doesn't exist,
            // simply create that child!
            temp->children[idx] = make_trienode(word[i]);
        }
        else {
            // Do nothing. The node already exists
        }
        // Go down a level, to the child referenced by idx
        // since we have a prefix match
        temp = temp->children[idx];
    }
    // At the end of the word, mark this node as the leaf node
    temp->is_leaf = 1;
    return root;
}

int search_trie(TrieNode* root, char* word)
{
    // Searches for word in the Trie
    TrieNode* temp = root;

    for(int i=0; word[i]!='\0'; i++)
    {
        int position = word[i] - 'а';
        if (temp->children[position] == NULL)
            return 0;
        temp = temp->children[position];
    }
    if (temp != NULL && temp->is_leaf == 1)
        return 1;
    return 0;
}

void print_trie(TrieNode* root) {
    // Prints the nodes of the trie
    if (!root)
        return;
    TrieNode* temp = root;
    printf("%c -> ", temp->data);
    for (int i=0; i<N; i++) {
        print_trie(temp->children[i]);
    }
}

void print_search(TrieNode* root, char* word) {
    printf("Searching for %s: ", word);
    if (search_trie(root, word) == 0)
        printf("Not Found\n");
    else
        printf("Found!\n");
}

int main() {
    // Driver program for the Trie Data Structure Operations
    TrieNode* root = make_trienode('\0');
    root = insert_trie(root, "привет");
    root = insert_trie(root, "пакет");
    root = insert_trie(root, "ветер");
    root = insert_trie(root, "таракан");
    print_search(root, "tea");
    print_search(root, "teabag");
    print_search(root, "teacan");
    print_search(root, "hi");
    print_search(root, "hey");
    print_search(root, "hello");
    print_trie(root);
   // free_trienode(root);
    return 0;
}*/
#pragma endregion
#pragma region Casts


/*int main() {
    double d = 3.14;
    int* p = reinterpret_cast<int*&>(d);
    cout << "Reference with reinterpret_cast: " << p << endl;
    double x = *p;
    try {
        cout << "Difference between reinterprent_cast<int*&> double and &double: " << &x - &d << endl;
    } catch (exception& ex) {
        cout << ex.what() << endl;
    }
    return 0;
}*/
#pragma endregion

//memset/memcpy

#pragma region Stack
/*int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    cout << s.top();
    return 0;
}*/

#pragma endregion


#pragma region UseStack

#pragma endregion
#include "PrefixMatcher.h"

void PrefixMatcher::insert_address(TrieNode* node, string& address, int routerNumber) {
    for (char c : address) {
        if (node->children.count(c) == 0) {
            node->children[c] = new TrieNode();
        }
        node = node->children[c];
    }
    node->routerNumber = routerNumber;
}

PrefixMatcher::PrefixMatcher() : root(new TrieNode()) {}

PrefixMatcher::~PrefixMatcher() {
    delete root;
}

void PrefixMatcher::insert(string address, int routerNumber) {
    insert_address(root, address, routerNumber);
}

int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNode* node = root;
    int longestPrefix = -1;
    int selectedRouter = -1;

    for (char c : networkAddress) {
        if (node->routerNumber != -1) {
            longestPrefix = node->routerNumber;
        }
        if (node->children.count(c) == 0) {
            break;
        }
        node = node->children[c];
    }

    if (longestPrefix != -1) {
        selectedRouter = longestPrefix;
    }

    return selectedRouter;
}

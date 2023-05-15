#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <iostream>
#include <unordered_map>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    int routerNumber;

    TrieNode() : routerNumber(-1) {}

    ~TrieNode() {
        for (auto& kv : children) {
            delete kv.second;
        }
    }
};

class PrefixMatcher {
private:
    TrieNode* root;

    void insert_address(TrieNode* node, string& address, int routerNumber);

public:
    PrefixMatcher();

    ~PrefixMatcher();

    void insert(string address, int routerNumber);

    int selectRouter(string networkAddress);
};

#endif 

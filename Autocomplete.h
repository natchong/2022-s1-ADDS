#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool is_word;

    TrieNode() : is_word(false) {}

    ~TrieNode() {
        for (auto& kv : children) {
            delete kv.second;
        }
    }
};

class Autocomplete {
private:
    TrieNode* root;

    void insert_word(TrieNode* node, string& word);

    void get_words(TrieNode* node, string& prefix, vector<string>& words);

public:
    Autocomplete();

    ~Autocomplete();

    void insert(string word);

    vector<string> getSuggestions(string partialWord);
};

#endif

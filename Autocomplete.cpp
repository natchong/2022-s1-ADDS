#include "Autocomplete.h"

void Autocomplete::insert_word(TrieNode* node, string& word) {
    for (char c : word) {
        if (node->children.count(c) == 0) {
            node->children[c] = new TrieNode();
        }
        node = node->children[c];
    }
    node->is_word = true;
}

void Autocomplete::get_words(TrieNode* node, string& prefix, vector<string>& words) {
    if (node->is_word) {
        words.push_back(prefix);
    }
    for (auto& kv : node->children) {
        prefix.push_back(kv.first);
        get_words(kv.second, prefix, words);
        prefix.pop_back();
    }
}

Autocomplete::Autocomplete() : root(new TrieNode()) {}

Autocomplete::~Autocomplete() {
    delete root;
}

void Autocomplete::insert(string word) {
    insert_word(root, word);
}

vector<string> Autocomplete::getSuggestions(string partialWord) {
    TrieNode* node = root;
    for (char c : partialWord) {
        if (node->children.count(c) == 0) {
            return vector<string>();
        }
        node = node->children[c];
    }

    vector<string> words;
    get_words(node, partialWord, words);
    return words;
}

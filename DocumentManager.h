#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Document {
    string name;
    int id;
    int license_limit;
    int borrowed_count;

    Document(string _name, int _id, int _license_limit)
        : name(_name), id(_id), license_limit(_license_limit), borrowed_count(0) {}
};

class DocumentManager {
private:
    unordered_set<int> patrons;
    unordered_map<int, Document> documents;

public:
    void addDocument(string name, int id, int license_limit) {
        Document document(name, id, license_limit);
        documents[id] = document;
    }

    void addPatron(int patronID) {
        patrons.insert(patronID);
    }

    int search(string name) {
        for (const auto& document : documents) {
            if (document.second.name == name) {
                return document.second.id;
            }
        }
        return 0;
    }

    bool borrowDocument(int docid, int patronID) {
        if (patrons.count(patronID) == 0 || documents.count(docid) == 0) {
            return false;
        }

        Document& document = documents[docid];
        if (document.borrowed_count >= document.license_limit) {
            return false;
        }

        document.borrowed_count++;
        // Perform any other necessary operations for borrowing a document

        return true;
    }

    void returnDocument(int docid, int patronID) {
        if (patrons.count(patronID) == 0 || documents.count(docid) == 0) {
            return;
        }

        Document& document = documents[docid];
        if (document.borrowed_count > 0) {
            document.borrowed_count--;
            // Perform any other necessary operations for returning a document
        }
    }
};

#endif

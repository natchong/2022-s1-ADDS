#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document document(name, id, license_limit);
    documents[id] = document;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    for (const auto& document : documents) {
        if (document.second.name == name) {
            return document.second.id;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
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

void DocumentManager::returnDocument(int docid, int patronID) {
    if (patrons.count(patronID) == 0 || documents.count(docid) == 0) {
        return;
    }

    Document& document = documents[docid];
    if (document.borrowed_count > 0) {
        document.borrowed_count--;
        // Perform any other necessary operations for returning a document
    }
}

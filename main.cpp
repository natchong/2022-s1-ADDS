#include <iostream>
#include "DocumentManager.h"

int main() {
    DocumentManager manager;

    // Add documents
    manager.addDocument("Document1", 1, 3);
    manager.addDocument("Document2", 2, 2);

    // Add patrons
    manager.addPatron(1001);
    manager.addPatron(1002);

    // Search for a document
    int docID = manager.search("Document1");
    if (docID != 0) {
        std::cout << "Document found. ID: " << docID << std::endl;
    } else {
        std::cout << "Document not found." << std::endl;
    }

    // Borrow a document
    bool success = manager.borrowDocument(1, 1001);
    if (success) {
        std::cout << "Document borrowed successfully." << std::endl;
    } else {
        std::cout << "Failed to borrow the document." << std::endl;
    }

    // Return a document
    manager.returnDocument(1, 1001);

    return 0;
}

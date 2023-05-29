#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include <vector>
#include <string>

class DocumentManager {
    private:

    struct Document {
        std::string name;
        int id;
        int license_limit;
        int borrowed_document;
        std::vector<int> patrons;
    };

    struct Patron {
        int patronID;
        std::vector<int> documents;
    };

    std::vector<Document> document_collection;
    std::vector<Patron> patron_collection;

    public:
    void addDocument(std::string, int id, int lisense_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronId);
};

#endif
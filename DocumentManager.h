#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>

struct Document {
    std::string name;
    int id;
    int license_limit;
    int borrowed_count;

    Document(std::string _name, int _id, int _license_limit)
        : name(_name), id(_id), license_limit(_license_limit), borrowed_count(0) {}
};

class DocumentManager {
private:
    std::unordered_set<int> patrons;
    std::unordered_map<int, Document> documents;

public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif // DOCUMENTMANAGER_H

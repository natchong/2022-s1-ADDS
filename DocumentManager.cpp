#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    Document doc;
    doc.name = name;
    doc.id = id;
    doc.license_limit = license_limit;
    doc.borrowed_document = 0;
    document_collection.push_back(doc);
};

void DocumentManager::addPatron(int patronID){
    Patron pat;
    pat.patronID = patronID;
    patron_collection.push_back(pat);
};

int DocumentManager::search(std::string name){
    for(int i = 0; i<document_collection.size(); i++){
        if(document_collection[i].name == name){
            return document_collection[i].id;
        }
    }
    return 0;
};

bool DocumentManager::borrowDocument(int docid, int patronID){
    for(int i=0; i<document_collection.size(); i++){
        if(document_collection[i].id == docid){
            if(document_collection[i].borrowed_document < document_collection[i].license_limit){
                document_collection[i].borrowed_document++;
                document_collection[i].patrons.push_back(patronID);
                return true;
            }
        }
    }
    return false;
};

void DocumentManager::returnDocument(int docid, int patronID){
    for(int i=0; i<document_collection.size(); i++){
        if(document_collection[i].id == docid){
            document_collection[i].borrowed_document--;
            for(int j=0; j<document_collection[i].patrons.size();j++){
                if(document_collection[i].patrons[j] == patronID){
                    document_collection[i].patrons.erase(document_collection[i].patrons.begin() + j);
                }
            }
        }
    }
};
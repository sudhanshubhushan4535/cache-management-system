#ifndef FACTORY_CLASS
#define FACTORY_CLASS

#include "eviction_class.h"
using namespace std;
class Factory {
    public:
    Eviction* getObject(string s){
        if(s == "LRU"){
            return new LRU();
        } else {
            return NULL;
        }
    }
};

#endif
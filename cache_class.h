#ifndef CACHE_CLASS
#define CACHE_CLASS
#include "factory_class.h"
class Cache {
    Eviction* Eviction;
    Factory* factory;

    public:
    
    void set(string s) {
        Eviction = factory->getObject(s);
        if(Eviction == NULL)
            cout<<"Input right eviction choice";
    }

    void add(int key, int value) {
        Eviction->insert(key, value);
    }

    int get(int key) {
        return Eviction->get(key);
    }
};

#endif
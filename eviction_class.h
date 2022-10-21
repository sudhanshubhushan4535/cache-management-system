#ifndef EVICTION_CLASS
#define EVICTION_CLASS
#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class Eviction {
    public:
    virtual void insert(int key, int value) = 0;
    virtual int get(int key) = 0;
};

class LRU : public Eviction {
    list<pair<int,int>> dl;
    unordered_map<int, list<pair<int, int>>::iterator> mp;
    //map key ->time
    public:

    
    void insert(int key, int value) {
        if(mp.find(key) != mp.end()){
            dl.erase(mp[key]);
        } 
        dl.push_front({key,value});
        mp[key] = dl.begin();
    }

    int get(int key) {
        if(mp.find(key) == mp.end())
            return -1;
        return mp[key]->second;
    }
    //void remove expired key
};
#endif
// similarly can add different eviction policy;
/*class LFU : public Eviction {
    *
    code
    *
};*/
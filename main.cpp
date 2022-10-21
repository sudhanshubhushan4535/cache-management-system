#include "cache_class.h"
using namespace std;
int main() {
    Cache* cache = new Cache();
    cache->set("LRU");

    cache->add(2,7);
    cache->add(3,6);
    cache->add(2,5);
    int value = cache->get(2);
    cout<<value;
}
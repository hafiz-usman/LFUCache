// LFUCache.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>

using namespace std;

class LFUCache {
public:
    LFUCache(int capacity) :
        _capacity(capacity)
    {
        assert(_capacity > 0);
    }

    // get(key) - Get the value(will always be positive) of the key if the key exists in the cache, otherwise return -1.
    // Could you do both operations in O(1) time complexity?
    int get(int key)
    {

    }

    // put(key, value) - Set or insert the value if the key is not already present.When the cache reaches its capacity, 
    // it should invalidate the least frequently used item before inserting a new item.For the purpose of this problem, 
    // when there is a tie(i.e., two or more keys that have the same frequency), the least recently used key would be evicted.
    // Could you do both operations in O(1) time complexity?
    void put(int key, int value)
    {

    }
private:
    int _capacity;
};

int main()
{
    return 0;
}


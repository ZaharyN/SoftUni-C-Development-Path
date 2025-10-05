#ifndef INDEXED_MAP_H
#define INDEXED_MAP_H

#include <cstdlib>
#include <set>

typedef int Value;

class IndexedSet
{
    std::set<Value> valuesSet;
    Value* valuesArray;
public:
    IndexedSet();
    IndexedSet(const IndexedSet& other);

    void add(const Value& v);

    std::size_t size() const;

    const Value& operator[](std::size_t index);

    IndexedSet& operator=(const IndexedSet& other);

    ~IndexedSet();
private:
    void buildIndex();
    void clearIndex();
};

#endif // INDEXED_MAP_H

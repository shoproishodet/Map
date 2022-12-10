//
// Created by alexandr on 10.12.22.
//

#ifndef DR_WEB_MAP_HPP
#define DR_WEB_MAP_HPP

#include "IDictionary.hpp"
#include "Tree.hpp"
#include "NotFoundExc.hpp"

template<class Key, class Value>
class Map : public IDictionary<Key, Value> {
private:
    Tree<Key, Value> *root;
    void Set(Tree<Key, Value> **ptr, const Key &key, const Value &value) {
        if (!*ptr) {
            *ptr = new Tree<Key, Value>(nullptr, nullptr, key, value);
            return;
        }
        if ((*ptr)->mKey == key) {
            (*ptr)->mValue = value;
            return;
        }
        key > (*ptr)->mKey ? Set(&(*ptr)->right, key, value) : Set(&(*ptr)->left, key, value);
    }

    Value const &Get(Tree<Key, Value> *const *ptr, const Key &key) const {
        if (!*ptr)
            throw NotFoundExc<Key>(key);
        if ((*ptr)->mKey == key)
            return (*ptr)->mValue;
        return key > (*ptr)->mKey ? Get(&(*ptr)->right, key) : Get(&(*ptr)->left, key);
    }

    bool IsSet(Tree<Key, Value> *const *ptr, const Key &key) const {
        if (!*ptr)
            return false;
        if ((*ptr)->mKey == key)
            return true;
        return key > (*ptr)->mKey ? IsSet(&(*ptr)->right, key) : IsSet(&(*ptr)->left, key);
    }

public:
    Map() : root(nullptr) {};

    void Set(const Key &key, const Value &value) override {
        Set(&root, key, value);
    }

    const Value &Get(const Key &key) const override {
        return Get(&root, key);
    }

    bool IsSet(const Key &key) const override {
        return IsSet(&root, key);
    }

    ~Map() override {
        delete root;
    }
};

#endif //DR_WEB_MAP_HPP

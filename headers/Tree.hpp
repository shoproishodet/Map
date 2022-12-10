//
// Created by alexandr on 10.12.22.
//

#ifndef DR_WEB_TREE_HPP
#define DR_WEB_TREE_HPP

template<class Key, class Value>
struct Tree {
    Tree *left = nullptr;
    Tree *right = nullptr;
    Key mKey;
    Value mValue;

    Tree(Tree *_left, Tree *_right, Key const &key, Value const &value) :
            left(_left), right(_right), mKey(key), mValue(value) {};

    ~Tree() {
        delete left;
        delete right;
    }
};

#endif //DR_WEB_TREE_HPP

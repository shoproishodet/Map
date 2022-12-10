//
// Created by alexandr on 10.12.22.
//

#ifndef DR_WEB_IDICTIONARY_HPP
#define DR_WEB_IDICTIONARY_HPP

template<class Key, class Value>
class IDictionary {
public:
    virtual ~IDictionary() = default;

    virtual const Value &Get(const Key &key) const = 0;

    virtual void Set(const Key &key, const Value &value) = 0;

    virtual bool IsSet(const Key &key) const = 0;
};

#endif //DR_WEB_IDICTIONARY_HPP

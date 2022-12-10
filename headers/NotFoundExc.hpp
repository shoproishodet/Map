//
// Created by alexandr on 10.12.22.
//

#ifndef DR_WEB_NOTFOUNDEXC_HPP
#define DR_WEB_NOTFOUNDEXC_HPP

#include "INotFoundExc.hpp"

template<class Key>
class NotFoundExc : public INotFoundExc<Key> {
private:
    Key mKey;
public:
    explicit NotFoundExc(Key key) : mKey(key) {};
    const Key &get_key() const noexcept override {
        return mKey;
    }
};

#endif //DR_WEB_NOTFOUNDEXC_HPP

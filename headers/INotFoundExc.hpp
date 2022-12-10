//
// Created by alexandr on 10.12.22.
//

#ifndef DR_WEB_INOTFOUNDEXC_HPP
#define DR_WEB_INOTFOUNDEXC_HPP

#include <exception>

template<class Key>
class INotFoundExc : public std::exception {
public:
    virtual const Key &get_key() const noexcept = 0;
};

#endif //DR_WEB_INOTFOUNDEXC_HPP

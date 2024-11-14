/*************************************************************************
	> File Name: function_template.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 18 Oct 2024 10:19:12 AM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define BEGINS(x) namespace x {
#define ENDS(x) }

BEGINS(function_impl)

template<typename T, typename ...ARGS>
class Base {
public :
    virtual T run(ARGS...) = 0;
    virtual Base<T, ARGS...> *getCopy() = 0;
    virtual ~Base() {}
};

template<typename T, typename ...ARGS>
class normal_function : public Base<T, ARGS...> {
public :
    normal_function(T (*ptr)(ARGS...)) : func(ptr) {}
    T run(ARGS ...args) override {
        return func(forward<ARGS>(args)...);
    }
    Base<T, ARGS...> *getCopy() override {
        return new normal_function(*this); 
    }
private:
    T (*func)(ARGS...);
};

template<typename CLASS_T, typename T, typename ...ARGS>
class functor : public Base<T, ARGS...> {
public :
    functor(CLASS_T obj) : obj(obj) {}
    T run(ARGS ...args) override {
        return obj(forward<ARGS>(args)...);
    }
    Base<T, ARGS...> *getCopy() override {
        return new functor(*this);
    }
private:
    CLASS_T obj;
};

template<typename T, typename ...ARGS> class function;
template<typename T, typename ...ARGS>
class function<T(ARGS...)> {
public :
    function(T (*ptr)(ARGS...)) : ptr(new normal_function<T, ARGS...>(ptr)) {} // ?
    template<typename CLASS_T>
    function(CLASS_T obj) : ptr(new functor<CLASS_T, T, ARGS...>(obj)) {}

    T operator()(ARGS... args) {
        return ptr->run(forward<ARGS>(args)...);
    }
    function &operator=(const function<T(ARGS...)> &func) {
        delete this->ptr;
        this->ptr = func.ptr->getCopy();
        return *this;
    }
    ~function() {
        delete this->ptr;
    }
private:
    Base<T, ARGS...> *ptr;
};

int add(int a, int b) {
    cout << "normal function : ";
    return a + b;
}

class ADD_MULT {
public :
    ADD_MULT(int x) : x(x) {}
    int operator()(int a, int b) {
        cout << "functor : ";
        return (a + b) * 2;
    }
private:
    int x;
};

int main() {
    ADD_MULT add_mult(2);
    function<int(int, int)> f1 = add;
    function<int(int, int)> f2 = add_mult;
    cout << f1(3, 4) << endl;
    cout << f2(3, 4) << endl;
    f1 = f2;
    cout << f1(3, 4) << endl;
    return 0;
}

ENDS(function_impl)


int main() {
    function_impl::main();
    return 0;
}

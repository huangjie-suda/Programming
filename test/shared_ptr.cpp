/*************************************************************************
	> File Name: shared_ptr.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Fri 18 Oct 2024 02:33:10 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define BEGINS(x) namespace x {
#define ENDS(x) }

BEGINS(test)

class A {
public :
    A() {
        cout << "default constructor" << endl;
    }
    int x, y;
    ~A() {
        cout << "destructor" << endl;
    } 
};

class ptr_data {
public :
    ptr_data(A *ptr, int *cnt = nullptr) : ptr(ptr), cnt(cnt) {
        if (this->cnt == nullptr) this->cnt = new int(1);
    }
    void increase_one() {
        *cnt += 1;
        return ;
    }
    void decrease_one() const {
        *cnt -= 1;
        if (*cnt == 0) delete ptr;
        return ;
    }
    bool operator==(const ptr_data &p) const {
        return p.ptr == ptr && p.cnt == cnt;
    }
    ~ptr_data() {
        decrease_one();
        if (*cnt == 0) delete cnt;
    }
    A *ptr;
    int *cnt;
};

class shared_ptr {
public :
    shared_ptr(A *ptr) : p(ptr) {}
    shared_ptr(const shared_ptr &p) : p(p.p) {
        this->p.increase_one();
    }
    shared_ptr &operator=(const shared_ptr &obj) {
        if (obj.p == p) return *this;
        p.decrease_one();
        p = obj.p;
        p.increase_one();
        return *this;
    }
    A *operator->() { return p.ptr; }
    A &operator*() { return *p.ptr; }
    int use_count() { return *p.cnt;}
    ~shared_ptr() {
        p.decrease_one();
    }
private:
    ptr_data p;
};

shared_ptr make_shared() {
    return shared_ptr(new A());
}


ostream &operator<<(ostream &out, const A &a) {
    out << "Class A : " << a.x << ", " << a.y;
    return out;
}

int main() {
    shared_ptr p = make_shared();
    p->x = 3, p->y = 4;
    cout << *p << endl;
    cout << "p.use_count = " << p.use_count() << endl;
    shared_ptr q = p;
    cout << "p.use_count = " << p.use_count() << endl;
    cout << "q.use_count = " << q.use_count() << endl;
    p = nullptr;
    cout << "q.use_count = " << q.use_count() << endl;
    q = nullptr;
    cout << "end main" << endl;
    return 0;
}

ENDS(test)

int main() {
    test::main(); 
    return 0;
}


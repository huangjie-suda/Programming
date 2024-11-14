/*************************************************************************
	> File Name: IQueue.cpp
	> Author: huang
	> Mail: 1309107123@qq.com
	> Created Time: Tue 15 Oct 2024 04:04:04 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

namespace haizei {

class IQueue {
public :
    virtual void push(int) = 0;
    virtual void pop() = 0;
    virtual bool empty() const = 0;
    virtual int top() const = 0;
    virtual int front() const = 0;
    virtual int size() const = 0;
    virtual ~IQueue() = 0; 
};

class queue : public IQueue {
public :
    queue(int n = 10) : data(new int[n]), head(0), tail(0), count(0), __size(n) {}
    void push(int val) override {
        if (count == __size) {
            expand();
        }
        data[tail++] = val;
        tail %= __size;
        count += 1;
        return ;
    }
    void pop() override {
        if (empty()) return ;
        head += 1;
        head %= __size;
        count -= 1;
        return ;
    }
    bool empty() const override {
        return count == 0;
    }
    
    int front() const override {
        return data[head];
    }
    int size() const override {
        return count;
    }
    void swap(queue &q) {
        std::swap(this->data, q.data);
        std::swap(this->head, q.head);
        std::swap(this->tail, q.tail);
        std::swap(this->count, q.count);
        std::swap(this->__size, q.__size);
        return ;
    }
    ~queue() {
        if (data) delete[] data;
        return ;
    }
private:
    int *data;
    int head, tail, count, __size;
    int top() const override {
        return data[head];
    }
    void expand() {
        queue q(2 * __size);
        while (!empty()) {
            q.push(front());
            pop();
        }
        this->swap(q);
        return ;
    }
};

class priority_queue : public IQueue {
public :
    priority_queue(int n = 10) : raw_data(new int[n]), data(raw_data - 1), count(0), __size(n) {}
    void push(int val) override {
        if (count == __size) {
            expand();
        }
        count += 1;
        data[count] = val;
        up_maintain(count);
        return ;
    }
    void pop() override{
        if (empty()) return ;
        data[1] = data[count];
        count -= 1;
        down_maintain(1);
        return ;
    }
    bool empty() const override{
        return count == 0;
    }
    int top() const override{
        return data[1];
    }
    int size() const override{
        return count;
    }
    ~priority_queue() {
        if (raw_data) delete[] raw_data;
        return ;
    }
    void swap(priority_queue &q) {
        std::swap(this->raw_data, q.raw_data);
        std::swap(this->data, q.data);
        std::swap(this->count, q.count);
        std::swap(this->__size, q.__size);
    }

private:
    int *raw_data, *data;
    int count, __size;
    void expand() {
        priority_queue q(2 * __size);
        while (!empty()) {
            q.push(top());
            pop();
        }
        this->swap(q);
        return ;
    }
    void up_maintain(int ind) {
        if (ind == 1) return ;
        if (data[ind] > data[ind >> 1]) {
            std::swap(data[ind >> 1], data[ind]);
            up_maintain(ind >> 1);
        }
        return ;
    }
    void down_maintain(int ind) {
        if ((ind << 1) > count) return ; 
        int temp = ind;
        if (data[temp] < data[ind << 1]) temp = ind << 1;
        if (((ind << 1) + 1 <= count) && (data[temp] < data[(ind << 1) + 1])) temp = (ind << 1) + 1;
        if (temp == ind) return ;
        std::swap(data[temp], data[ind]);
        down_maintain(temp);
        return ;
    }
    int front() const override {
        return data[1];
    }
};

}

int main() {




    return 0;
}

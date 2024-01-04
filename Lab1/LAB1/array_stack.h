#pragma once
#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "stack.h"
#include <iostream>

class ArrayStack : public Stack {
private:
    static const int maxSize = 10;
    int data[maxSize];
    int top; // Indicele elementului din vârful stivei

public:
    ArrayStack(); // Constructor
    ~ArrayStack(); // Destructor

    bool isEmpty() const override;
    bool isFull() const override;
    void push(int value) override;
    int pop() override;
    int peek() const override;
    void print() const override;
};

#endif // ARRAY_STACK_H

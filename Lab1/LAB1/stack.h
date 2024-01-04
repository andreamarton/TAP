#pragma once
#ifndef STACK_H
#define STACK_H

class Stack {
public:
    virtual ~Stack() {}

    // Metodele pure virtuale
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual void push(int value) = 0;
    virtual int pop() = 0;
    virtual int peek() const = 0;
    virtual void print() const = 0;
};

#endif 


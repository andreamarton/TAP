#include <iostream>
#include "array_stack.h"
#include <stdexcept>

ArrayStack::ArrayStack() : top(-1) {}

ArrayStack::~ArrayStack() {}

bool ArrayStack::isEmpty() const {
    return top == -1;
}

bool ArrayStack::isFull() const {
    return top == maxSize - 1;
}

void ArrayStack::push(int value) {
    if (isFull()) {
        throw std::overflow_error("Stiva este plina.");
    }
    data[++top] = value;
}

int ArrayStack::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stiva este vida.");
    }
    return data[top--];
}

int ArrayStack::peek() const {
    if (isEmpty()) {
        throw std::underflow_error("Stiva este vida.");
    }
    return data[top];
}

void ArrayStack::print() const {
    if (isEmpty()) {
        std::cout << "Stiva este vida." << std::endl;
    }
    else {
        std::cout << "Stiva: ";
        for (int i = 0; i <= top; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
}



int main()
{
    ArrayStack stack;

    try {
        std::cout << "Is Empty: " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

        stack.push(1);
        stack.push(2);
        stack.push(3);

        std::cout << "Is Full: " << (stack.isFull() ? "Yes" : "No") << std::endl;

        std::cout << "Stack Peek: " << stack.peek() << std::endl;
        std::cout << "Stack Pop: " << stack.pop() << std::endl;

        std::cout << "Stack after Pop: ";
        stack.print();

        std::cout << "Is Empty: " << (stack.isEmpty() ? "Yes" : "No") << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


#include"coadaStatica.h"
#include<exception>

class Queue_Underflow : public std::exception {
public:
    const char* what() const throw(){
    return "Queue underflow: coada goala";
    }
};
class Queue_Overflow : public std::exception{
public:
    const char* what() const throw(){
    return "Queue overflow: coada plina";
    }
};

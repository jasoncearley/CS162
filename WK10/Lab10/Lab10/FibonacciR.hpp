//
//  FibonacciR.hpp
//  Lab10
//
//  Created by Jason Cearley on 11/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//
//  Code copied from http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C

#ifndef FibonacciR_hpp
#define FibonacciR_hpp

#include <stdio.h>

class FibonacciR
{
public:
    FibonacciR();
    FibonacciR(const long &n);
    virtual ~FibonacciR();
    void PrintFibonacci();
    long rfactorial (long n);
    long factorialHelper (long n, long result);
    long factorial(long n);

private:
    long Fibonacci(const long &n);
    const long *n_;
};

#endif /* FibonacciR_hpp */

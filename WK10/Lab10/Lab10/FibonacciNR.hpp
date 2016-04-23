//
//  FibonacciNR.hpp
//  Lab10
//
//  Created by Jason Cearley on 11/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//
//  Code copied from http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C


#ifndef FibonacciNR_hpp
#define FibonacciNR_hpp

#include <stdio.h>

class FibonacciNR
{
public:
    FibonacciNR(const long &n);
    virtual ~FibonacciNR();
    void PrintFibonacci();

private:
    FibonacciNR();
    long Fibonacci(const long &n);
    const long* n_;
};

#endif /* FibonacciNR_hpp */

//
//  FibonacciR.cpp
//  Lab10
//
//  Created by Jason Cearley on 11/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//
//  Code copied from http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C


#include "FibonacciR.hpp"
#include <iostream>

FibonacciR::FibonacciR()
{
    
}

FibonacciR::FibonacciR(const long &n):n_(&n)
{
    
}

FibonacciR::~FibonacciR()
{
    
}

long FibonacciR::Fibonacci(const long &n)
{
    if(n == 0)
        return 0;
    
    else if(n == 1)
        return 1;
    
    return Fibonacci(n-1) + Fibonacci(n-2);
}

void FibonacciR::PrintFibonacci()
{
    long FibonaciNum = Fibonacci(*n_);
    
    std::cout << "Fibonaci number: " << FibonaciNum << std::endl;
}

// Not Tail Recursive
long FibonacciR::rfactorial (long n)
{
    if (n == 1)
        return 1;
    
    else
        return n * rfactorial(n - 1);
}

// Tail Recursive
long FibonacciR::factorialHelper (long n, long result)
{
    if (n == 1)
        return result;
    
    else
        return factorialHelper(n - 1, n * result);
}

long FibonacciR::factorial(long n)
{
    return factorialHelper(n, 1);
}













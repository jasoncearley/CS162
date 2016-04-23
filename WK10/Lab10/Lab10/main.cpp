//
//  main.cpp
//  Lab10
//
//  Created by Jason Cearley on 11/30/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <chrono>
#include <iomanip>
#include "FibonacciNR.hpp"
#include "FibonacciR.hpp"

int main()
{
    long long num = 0, temp = 0;
    
    cout << "Enter Fibonacci number you would like to find: ";
    cin >> num;
    
    cout << endl << "Finding Fibonacci number " << num << " using recursion....." << endl;
    
    // set start equal to time now
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    
    for (int a = 0; a < 1000000; a++)
    {
        // find fibonacci num using recursion
        FibonacciR recursive(num);
    }
    
    // find fibonacci num using recursion
    FibonacciR recursive(num);
    
    // set stop to time now
    std::chrono::high_resolution_clock::time_point stop = std::chrono::high_resolution_clock::now();
    
    recursive.PrintFibonacci();
    
    // calculate runtime
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
    
    cout << "It took " << std::showpoint << std::setprecision(6) << static_cast<long double>(duration/1000001.0) << " nanoseconds to calculate that Fibonacci number." << endl;
    
    cout << endl << "Finding Fibonacci number " << num << " non-recursively....." << endl;
    
    // set start equal to time now
    start = std::chrono::high_resolution_clock::now();
    
    for (int a = 0; a < 1000000; a++)
    {
        // find fibonacci num non-recursively
        FibonacciNR non_recursive(num);
    }
    
    // find fibonacci num non-recursively
    FibonacciNR non_recursive(num);
    
    // set stop to time now
    stop = std::chrono::high_resolution_clock::now();
    
    non_recursive.PrintFibonacci();
    
    // calculate runtime
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
    
    cout << "It took " << std::showpoint << std::setprecision(6) << static_cast<long double>(duration/1000001.0) << " nanoseconds to calculate that Fibonacci number." << endl;
    
    cout << endl << "Enter the number you for which you would like to find the factorial: ";
    cin >> num;
    
    cout << endl << "Finding Factorial number " << num << " using non-tail recursion....." << endl;
    
    // create a non-tail object
    FibonacciR non_tail;
    
    // set start equal to time now
    start = std::chrono::high_resolution_clock::now();
    
    for (int a = 0; a < 1000000; a++)
    {
        // find factorial of num using non-tail recursion
        temp = non_tail.rfactorial(num);
    }
    
    // set stop to time now
    stop = std::chrono::high_resolution_clock::now();
    
    // calculate runtime
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
    
    cout << "Factorial number: " << temp << endl;
    
    cout << "It took " << std::showpoint << std::setprecision(8) << static_cast<long double>(duration/100000.0) << " nanoseconds to calculate that Factorial number." << endl;
    
    cout << endl << "Finding Factorial number " << num << " using tail recursion....." << endl;
    
    // create a tail object
    FibonacciR tail;
    
    // set start to time now
    start = std::chrono::high_resolution_clock::now();
    
    for (int a = 0; a < 1000000; a++)
    {
        // find factorial of num using tail recursion
        temp = tail.factorial(num);
    }
    
    // set stop to time now
    stop = std::chrono::high_resolution_clock::now();
    
    // calculate runtime
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start).count();
    
    cout << "Factorial number: " << temp << endl;
    
    cout << "It took " << std::showpoint << std::setprecision(8) << static_cast<long double>(duration/100000.0) << " nanoseconds to calculate that Factorial number." << endl;
    
    return 0;
}

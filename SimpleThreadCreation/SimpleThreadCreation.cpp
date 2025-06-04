/**
 * @file SimpleThreadCreation.cpp
 * @author Gandla bhargavi
 * @brief  A simple C++ program that demonstrates the creation of a thread using the C++ Standard Library.
 * This program creates a thread that prints a message and then waits for the thread to finish before exiting.
 * @version 0.1
 * @date 2025-06-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <thread>

// Function to be executed by the thread
void printMessage()
{
    std::cout << "Hello from the thread!" << std::endl;
}

int main()
{
    // Creating a thread that runs the printMessage function
    std::thread t(printMessage);

    // Wait for the thread to finish execution
    t.join();

    std::cout << "Hello from the main thread!" << std::endl;
    return 0;
}

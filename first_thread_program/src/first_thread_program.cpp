//============================================================================
// Name        : first_thread_program.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <functional>
#include <thread>
#include <atomic>
//using namespace std;

void func(std::atomic<int>& counter);
int main()
    {
    std::atomic<int> counter(0);
    std::vector<std::thread> threads;
    for (int var = 0;  var < 100; ++var) {
	threads.push_back(std::thread{func, std::ref(counter)});
    }
    for(auto &t : threads)
	{
	t.join();
	}
    std::cout << "result " << counter << std::endl; // prints
	return 0;
    }
void func(std::atomic<int>& counter)
    {
    for(int i = 0; i < 100000; ++i)
	{
	++counter;
	}
    }

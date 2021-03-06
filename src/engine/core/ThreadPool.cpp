/// @file

#include <cstdio>
#include <thread>
#include <atomic>
#include <mutex>

#include "ThreadPool.hpp"

std::mutex mutex;

void ThreadLoop()
{
	using namespace std::chrono_literals;
	
	static std::atomic_int nLoop;
	
	while(true)
	{
		// TODO: do something
		
		if(nLoop != 100)
		{
			std::this_thread::sleep_for(1s);
			std::lock_guard<std::mutex> guard(mutex);
			printf("ThreadLoop (id #%d)\n", std::this_thread::get_id());
			++nLoop;
		};
	};
};

CThreadPool::CThreadPool(int anThreadCount)
{
	if(anThreadCount == -1)
		anThreadCount = std::thread::hardware_concurrency() - 1;
	
	if(anThreadCount < 0)
		anThreadCount = 0;
	
	for(auto i = 0; i < anThreadCount; ++i)
	{
		mvThreads.emplace_back(ThreadLoop);
		mvThreads[i].detach();
	};
	
	printf("ThreadPool: hardware_concurrency is %d\n", std::thread::hardware_concurrency());
	printf("ThreadPool: %d worker thread(s) spawned\n", anThreadCount);
};

CThreadPool::~CThreadPool() = default;
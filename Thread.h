#pragma once

#include <thread>
#include <cstdio>

class Thread
{
public:
    Thread();
    ~Thread();
    virtual void start();
    virtual void run();
	void stopThread();

protected:
    std::thread mThread;
    std::atomic<bool> mRunThread; // Super simple thread stopping.
};
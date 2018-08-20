#include "Thread.h"

Thread::Thread() : mThread(), mRunThread(true)
{
}

Thread::~Thread()
{
    if(mThread.joinable())
    {
        mThread.join();
    }
}

void Thread::start()
{
    // mThread = std::thread(&Thread::run,this);
	mThread = std::thread( [this] { this->run(); } );
}

void Thread::run()
{
    while(mRunThread)
    {
        printf("THREAD: run() not implemented by subclass!\n");
        std::this_thread::sleep_for( std::chrono::seconds(1) );
    }
}

void Thread::stopThread()
{
	mRunThread = false;
}

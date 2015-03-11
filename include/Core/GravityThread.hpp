#ifndef _GravityThread_hpp_
#define _GravityThread_hpp_

#include <Utilities\Logger.hpp>
#include <thread>

class ThreadManager;

using namespace std;
extern void ug::log(std::string);

class GravityThread
{
private:
	ThreadManager* parent;
	thread me;
	void run();

public:
	GravityThread(ThreadManager* _parent);
	~GravityThread();

	ThreadManager* getParent();

	void launch();
	void terminate();
};

#endif // !_GravityThread_hpp_
#include <iostream>
#include <windows.h>
#include <thread>
int ThreadProc(int a);
using namespace std;
int main()
{
	thread t2(ThreadProc, 123);
	
	int a = 0;
	for (int i=0; i < 10000; i++) {
		a = a + i;
	}
	
	t2.join();//wait for this thread to finish
	
}

int ThreadProc(int a) {
	for (int i = 0; i < 100000000; i++) {
		a = a + i;
	}
	return a;
}


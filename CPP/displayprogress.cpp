#include<iostream>
#include <ctime>
#include <thread>         
#include <chrono>
using namespace std;

void wait(int seconds)
{    
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}

int main()
{
    int count = 0;
    cout << "Loading ";
    for(int i=0; i< 5; ++i){
      cout << "#";
      fflush(stdout);
      wait(2);


    }
    return 0;
}

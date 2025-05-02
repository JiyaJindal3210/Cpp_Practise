/*
#include <iostream>
#include <thread>
using namespace std;

void thread1(){
    cout << "Hello from thread 1" << endl;
}

void thread2(){
    cout << "Hello from thread 2" << endl;
}

int main() {
    thread t1(thread1);
    thread t2(thread2);

    t1.join();
    t2.join();

    cout << "All threads have completed..." << endl;
}
*/

/*
#include <iostream>
#include <thread>
using namespace std;

int countt = 0;

void increment1(){
    for(int i=0;i<=100000;i++){
        countt++;
    }
}

void increment2(){
    for(int i=0;i<=100000;i++){
        countt++;
    }
}

int main() {
    thread t1(increment1);
    thread t2(increment2);

    t1.join();
    t2.join();

    cout << "Count is: " << countt << endl;
}
*/

/*
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int countt = 0;
mutex m;

void increment1(){
    for(int i=1;i<=100000;i++){
        m.lock();
        countt++;
        m.unlock();
    }
}

void increment2(){
    for(int i=1;i<=100000;i++){
        m.lock();
        countt++;
        m.unlock();
    }
}

int main() {
    thread t1(increment1);
    thread t2(increment2);

    t1.join();
    t2.join();

    cout << "Count is: " << countt << endl;
}
*/


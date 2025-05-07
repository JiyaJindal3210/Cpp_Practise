// using thread library

// create one numbers array globally and find out the 
// first half element product and second half element product
// by different 2 threads

// example :
// nums = [1,2,3,4,5];

/*
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int nums[] = {1,2,3,4,5,6};

int productCalc1 = 1;
void product1(){
    m.lock();
    for(int i=0;i<3;i++){
        productCalc1 = productCalc1*nums[i];
    }
    cout << "First Half Element product: " << productCalc1 << endl;
    m.unlock();
    
}

int productCalc2 = 1;
void product2(){
    m.lock();
    for(int i=3;i<6;i++){
        productCalc2 = productCalc2*nums[i];
    }
    cout << "Second Half Element product: " << productCalc2 << endl;
    m.unlock();
    
}

int main() {
    thread t1(product1);
    thread t2(product2);

    t1.join();
    t2.join();

    cout << "Sum of both the Half: " << (productCalc1+productCalc2) << endl;
}
*/

// join and detach 

/*
#include <iostream>
#include <thread>
using namespace std;

void welcome(){
    cout << endl << "Welcome from welcome thread..." << endl;
}

int main() {

    thread t(welcome);// lifecycle of thread // New , Runnable(ready to run), running 
    t.join();
    cout << endl << "End of main thread..." << endl;

}
*/




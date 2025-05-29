// c style multithreading

/*

// Example 1 : 

#include <iostream>
#include <pthread.h>
using namespace std;

void* thread1(void* args){
    cout << "Hello from Thread 1" << endl;
    return nullptr;
}

void* thread2(void* args){
    cout << "Hello from Thread 2" << endl;
    return nullptr;
}

// while using multithreading concept and we need to define a function then 
// it should be a void pointer - can point to any data type but dereferenced only after typecasting


int main() {
    pthread_t t1;
    pthread_t t2;
    // if we need to create a object we need to create pthread_t object
    pthread_create(&t1,NULL,thread1,NULL); // takes 4 arguments - helps to create thread

    pthread_create(&t2,NULL,thread2,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t2,NULL);
    pthread_join(t1,NULL);
    // its function is - the execution will wait till one thread not get terminated
    cout << "All threads have completed.." << endl;
    return 0;
}

// race condition - when both the threads are trying to get/access the resource at the same time 
// then it will show undefined behaviour

*/

/*

// Example 2 :

#include <iostream>
#include <pthread.h>
using namespace std;

void* tableOf2(void* args){
    for(int i=1;i<=10;i++){
        cout << i*2 << endl;
    }
    cout << "--------------"  << endl;
    return nullptr;
}

void* squareOfFirst10NaturalNumber(void* args){
    for(int i=1;i<=10;i++){
        cout << i*i << endl;
    }
    cout << "--------------"  << endl;
    return nullptr;
}


int main() {
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,tableOf2,NULL); // takes 4 arguments - helps to create thread

    pthread_create(&t2,NULL,squareOfFirst10NaturalNumber,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t2,NULL);
    pthread_join(t1,NULL);

}
*/


// Example 3 :

/*
#include <iostream>
#include <pthread.h>
using namespace std;

int countt = 0; // resource 

void* increment1(void* args){
    for(int i=1;i<=10000;i++){
        countt++;
    }
    return nullptr;
}

void* increment2(void* args){
    for(int i=1;i<=10000;i++){
        countt++;
    }
    cout << "--------------"  << endl;
    return nullptr;
}

// main thread
int main() {
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,increment1,NULL); // takes 4 arguments - helps to create thread

    pthread_create(&t2,NULL,increment2,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t2,NULL);
    pthread_join(t1,NULL);

    cout << "Countt is : " << countt << endl;

}
*/

// we can prevent this undefined behaviour or race condition
// by using synchronization


/*

// Example 4 :

#include <iostream>
#include <pthread.h>
using namespace std;

void* thread1(void* args){
    int x = *(int*)args;
    for(int i=1;i<=x;i++){
        cout << i << endl;
    }
    return nullptr;
}


// main thread
int main() {

    pthread_t t1;
    int limit = 10;
    pthread_create(&t1,NULL,thread1,&limit); // takes 4 arguments - helps to create thread
    pthread_join(t1,NULL);
    
}
*/

/*
#include <iostream>
#include <pthread.h>
using namespace std;

void* thread1(void* args){
    int sum = 0;
    int x = *(int*)args;
    for(int i=1;i<=x;i++){
        cout << i << endl;
        sum += i;
    }
    void* ptr = new int(sum);
    return ptr;
}


// main thread
int main() {

    pthread_t t1;
    int limit = 10;
    pthread_create(&t1,NULL,thread1,&limit); // takes 4 arguments - helps to create thread
    void* ptr;
    pthread_join(t1,NULL);

    int result = *(int*)ptr;

    cout << "Result is : " << result << endl;
    
}
*/

/*
#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

void* tableOf2(void* args){
    pthread_mutex_lock(&lock1);
    for(int i=1;i<=10;i++){
        cout << i*2 << endl;
    }
    cout << "--------------"  << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* squareOfFirst10NaturalNumber(void* args){
    pthread_mutex_lock(&lock1);
    for(int i=1;i<=10;i++){
        cout << i*i << endl;
    }
    cout << "--------------"  << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,tableOf2,NULL); // takes 4 arguments - helps to create thread

    pthread_create(&t2,NULL,squareOfFirst10NaturalNumber,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t2,NULL);
    pthread_join(t1,NULL);

}


// race condition : when two or more threads are trying to access particular resource at the same time then there will be 
// high chances of undefined behaviour , the situation is known as race condition in multithread program.

// to prevent this , we need to use synchronization technique in our code 
*/

#include <iostream>
using namespace std;

int main() {
    
}
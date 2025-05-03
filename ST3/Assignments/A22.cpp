/*
// Question 1 : 

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int n;

void* Fibonacci(void* args){
    pthread_mutex_lock(&lock1);
    int a = 0;
    int b = 1;
    for(int i=0;i<n;i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;

    cout << "Enter value of n : " ;
    cin >> n;

    pthread_create(&t1,NULL,Fibonacci,NULL); // takes 4 arguments - helps to create thread
    pthread_join(t1,NULL);

}
*/

/*
// Question 2 : 

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int n;

void* PrimePrint(void* args){
    pthread_mutex_lock(&lock1);
    
    for(int i=1;i<n;i++){
        int count = 0;
        for(int j=1;j<=n;++j){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout << i << " ";
        }
    }
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;

    cout << "Enter value of n : " ;
    cin >> n;

    pthread_create(&t1,NULL,PrimePrint,NULL); // takes 4 arguments - helps to create thread
    pthread_join(t1,NULL);

}
*/

/*
// Question 3 : 

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int n;

void* Even(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Thread 1 : " ;
    for(int i=1;i<n;i++){
        if(i%2==0){
            cout << i << " ";
        }
    }
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* Odd(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Thread 2 : " ;
    for(int i=1;i<n;i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;
    pthread_t t2;

    cout << "Enter value of n : " ;
    cin >> n;

    
    pthread_create(&t1,NULL,Even,NULL); // takes 4 arguments - helps to create thread
    
    pthread_create(&t2,NULL,Odd,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

}
*/

/*
// Question 4 : 

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int n;

void* Factorial(void* args){
    pthread_mutex_lock(&lock1);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout << "Factorial is : " << fact << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;

    cout << "Enter value of n : " ;
    cin >> n;

    pthread_create(&t1,NULL,Factorial,NULL); // takes 4 arguments - helps to create thread
    pthread_join(t1,NULL);

}
*/

/*
// Question 5 : 

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

/*
// Question 6 : 


#include <iostream>
#include <pthread.h>
using namespace std;

int countt = 0;
pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

void* increment1(void* args){
    for(int i = 1; i <= 10000; i++){
        pthread_mutex_lock(&lock1);
        countt++;
        pthread_mutex_unlock(&lock1);
    }
    return nullptr;
}

void* increment2(void* args){
    for(int i = 1; i <= 10000; i++){
        pthread_mutex_lock(&lock1);
        countt++;
        pthread_mutex_unlock(&lock1);
    }
    cout << "--------------"  << endl;
    return nullptr;
}

int main() {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, increment1, NULL);
    pthread_create(&t2, NULL, increment2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    cout << "Countt is : " << countt << endl;
    return 0;
}
*/

// Question 7 : 

/*
#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int arr[10] = {1,2,3,4,5,6,7,8,9,10};

int sum1 = 0;
void* First50(void* args){
    pthread_mutex_lock(&lock1);
    
    for(int i=0;i<5;i++){
        sum1 += arr[i];
    }
    cout << "Sum from thread 1: " << sum1 << endl;
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}
int sum2 = 0;
void* Last50(void* args){
    pthread_mutex_lock(&lock1);
    
    for(int i=5;i<10;i++){
        sum2 += arr[i];
    }
    cout << "Sum from thread 2: " << sum2 << endl;
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;
    pthread_t t2;
    

    pthread_create(&t1,NULL,First50,NULL); // takes 4 arguments - helps to create thread
    pthread_create(&t2,NULL,Last50,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    cout << "Total Sum: " << (sum1+sum2) << endl;

}
*/

// Question 8 : 

/*
#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

int arr[] = {5,2,9,6,4};

void* MaxElement(void* args){
    pthread_mutex_lock(&lock1);
    int max = arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum element is: " << max << endl;
    cout << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main() {
    pthread_t t1;
    
    pthread_create(&t1,NULL,MaxElement,NULL); // takes 4 arguments - helps to create thread

    pthread_join(t1,NULL);

}
*/

// Question 9 : 

/*
#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

void* thread1(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Loggin info 1" << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* thread2(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Loggin info 2" << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* thread3(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Loggin info 3" << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

int main() {
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;

    pthread_create(&t1,NULL,thread1,NULL); 
    pthread_create(&t2,NULL,thread2,NULL); 
    pthread_create(&t3,NULL,thread3,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    
    return 0;
}
*/

// Question 10 : 

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;

void* tableOf2(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Table of 2: " << endl;
    for(int i=1;i<=10;i++){
        cout << i*2 << " ";
    }
    cout << endl << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* tableOf5(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Table of 5: " << endl;
    for(int i=1;i<=10;i++){
        cout << i*5 << " ";
    }
    cout << endl << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}

void* tableOf10(void* args){
    pthread_mutex_lock(&lock1);
    cout << "Table of 10: " << endl;
    for(int i=1;i<=10;i++){
        cout << i*10 << " ";
    }
    cout << endl << endl;
    pthread_mutex_unlock(&lock1);
    return nullptr;
}


int main(){

    pthread_t t1;
    pthread_t t2;
    pthread_t t3;

    pthread_create(&t1,NULL,tableOf2,NULL);
    pthread_create(&t2,NULL,tableOf5,NULL);
    pthread_create(&t3,NULL,tableOf10,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);

}
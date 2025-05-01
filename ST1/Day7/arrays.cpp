// #include<iostream>
// using namespace std;
// int main(){
//     // syntax
//     // single dimensional
//     // dataType arrayName[arraySize] ex:
//     // multi dimensional
//     // dataType arrayName[rows][columns]

//     // int nums[5];  //array named nums consisting of integer of size 5
//     // // to access elements of array; using index
//     // cout <<nums[0]<<endl;  //here we will get any random value as  we have not added any data in the array
    
//     // initialization at the time of declaration

//     // int nums[5]={1,2,3,4,5};
//     // int nums[]={1,2,3,4,5,6,7,8};

//     // int numbers[]={1,2,3,4,5,6,7,8,9,10};
//     // // array element accessing using loop

//     // // how to find number of element in the array
//     // // sizeof(arrayName) = size in bytes
//     // int size=sizeof(numbers)/sizeof(numbers[0]);

//     // for(int i=0;i<size;i++){
//     //     cout<<numbers[i]<<" ";
//     // }

//     // input taking for array

//     // Step 1 : Take the input for array size
//     // Step 2: for that array size, ask for values.

//     // Example: 
//     // Step 1:
//     int size;
//     cout<<"Enter the size for array: ";
//     cin>>size;
//     // Step 2:
//     int nums[size];

//     for(int i=0;i<size;i++){
//         cout<<"Enter Number for index "<<i<<" ";
//         cin>>nums[i];
//     }

//     cout<<"Entered Numbers by Users: ";
    
//     // printing the data

//     for(int i=0;i<size;i++){
//         cout<<nums[i]<<" ";
//     }


//     }


// #include<iostream>
// using namespace std;
// int main(){
//      int size;
//     cout<<"Enter the size for array: ";
//     cin>>size;
//     int nums[size];

//     for(int i=0;i<size;i++){
//         cout<<"Enter Number for index "<<i<<" ";
//         cin>>nums[i];
//     }

//     cout<<"Entered Numbers by Users: ";
    
//     // printing the data
//     int sum=0;
//     int even=0;
//     int odd=0;
//     int div=0;
//     int count=0;
//     for(int i=0;i<size;i++){
//         cout<<nums[i]<<endl;
//         sum=sum+nums[i];
//         if(nums[i]%2==0){
//             even=even+nums[i];
//             count=count+1;
//         }
//         if(nums[i]%2!=0){
//             odd=odd+nums[i];
//         }
//         if(nums[i]%5==0){
//             div=div+nums[i];
//         }
        


//     }
//     cout<<"Sum of elements: "<<sum<<endl;
//     cout<<"Sum of even elements: "<<even<<endl;
//     cout<<"Sum of odd elements: "<<odd<<endl;
//     cout<<"Sum of numbers divisible by 5: "<<div<<endl;
//     cout<<"Average of even numbers"<<even/count;

    

// }

#include<iostream>
using namespace std;
int main(){
    
    int numbers[]={34,23,12,56,34,23,11,23,78};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int evenCount=0;
    for(int i=0;i<size;i++){

        if(numbers[i]%2==0)
            evenCount++;
        

    }
    int evenNums[evenCount];
    int index=0;

    for(int i=0;i<size;i++){
        if(numbers[i]%2==0)
        evenNums[i++]=numbers[i];
    }
    for(int i=0;i<evenCount;i++){
        cout<<evenNums[i]<<" ";
    }
  
    }
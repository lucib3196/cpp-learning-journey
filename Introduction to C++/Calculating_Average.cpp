// Learning C++

#include <iostream>

using namespace std;


int main(){
    int arr[] = {1,23,32,24,337};
    float sum = 0;
    int size_array = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array  : "<<size_array  <<endl;
    
    for (int num:arr){
        sum +=num;
        cout<<"Current Sum  :"<<sum  <<endl;

        float average = sum/size_array;
         cout<<"Current Average  :"<<average  <<endl;
    }
}
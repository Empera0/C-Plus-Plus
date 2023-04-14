#include <iostream>

int SumElements(int *ptr,int S_Array);

//Sum array with pointers
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int *num_ptr = &arr[0]; 
    int S_Array = sizeof(arr) / sizeof(arr[0]);
    int sum = SumElements(num_ptr, S_Array);

    std::cout << sum << std::endl;
}

int SumElements(int *ptr,int S_Array){
    
   int sum = 0;

    for (int i = 0; i < S_Array; i++)
    {
        sum += *(ptr + i);
    }

    return sum;
}
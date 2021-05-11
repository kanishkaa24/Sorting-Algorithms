#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void swap(unsigned long long *var1, unsigned long long int *var2){
    unsigned long long int temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

void bubblesort(int size_of_arr, unsigned long long int arr[]){
    if(size_of_arr == 1){
        return;
    }
    else{
        for(int i=0;i<size_of_arr-1;i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
        bubblesort(size_of_arr-1, arr);
    }
}

int main(){
    int size_of_array;
    cout << "Enter the size of the array: ";
    cin >> size_of_array;
    unsigned long long int arr[size_of_array];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size_of_array;i++)
    {
        cin >> arr[i];
    }
    bubblesort(size_of_array, arr);
    cout << "The sorted array is: ";
    for(int i=0;i<size_of_array;i++)
    {
        cout << arr[i] << " ";
    }
}
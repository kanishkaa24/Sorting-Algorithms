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

void selectionsort(int size_of_arr, unsigned long long int arr[], int n){
    if(size_of_arr == 1|| n >= size_of_arr){
        return;
    }
    else{
        unsigned long long int element;
        int index = n;
        element =  arr[n];
        for(int i=n+1;i<size_of_arr;i++){
            if(arr[i] < element){
                element = arr[i];
                index = i;
            }
        }
        swap(&arr[n],&arr[index]);
        selectionsort(size_of_arr, arr, n+1);
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
    int n = 0;
    selectionsort(size_of_array, arr, n);
    cout << "The sorted array is: ";
    for(int i=0;i<size_of_array;i++)
    {
        cout << arr[i] << " ";
    }
}
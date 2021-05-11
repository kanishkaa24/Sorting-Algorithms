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
    for(int i=0;i<size_of_arr-1;i++){
        for(int j=0;j<size_of_arr-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j+1],&arr[j]);
            }
        }
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
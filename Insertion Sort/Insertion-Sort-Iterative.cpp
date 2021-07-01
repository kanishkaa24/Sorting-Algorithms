#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int size_of_arr, unsigned long long int arr[]){
    int j;
    unsigned long long int element;
    for(int i=1;i<size_of_arr;i++){
        j = i-1;
        element = arr[i];
        int index = i;
        while(j >= 0 && arr[j]>element){
            unsigned long long int temp;
            temp = arr[j];
            arr[j] = element;
            arr[index] = temp;
            j--;
            index--;
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
    insertionsort(size_of_array, arr);
    cout << "The sorted array is: ";
    for(int i=0;i<size_of_array;i++)
    {
        cout << arr[i] << " ";
    }
}
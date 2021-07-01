#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void merge(int start, int mid, int end, unsigned long long int arr[]){
    unsigned long long int temp[end];
    int i = start;
    int j = mid+1;
    int k = start;
    int index = start;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp[index] = arr[i];
            i++;
            index++;
        }
        else{
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    while(i <= mid){
        temp[index] = arr[i];
        i++;
        index++;
    }
    while(j <= end){
        temp[index] = arr[j];
        j++;
        index++;
    }
    while(k < index){
        arr[k] = temp[k];
        k++;
    }

};

void mergesort(int start, int end, unsigned long long int arr[]){
    if(end-start > 0)
    {
        int mid;
        mid = start + end;
        mid /= 2;
        mergesort(start, mid, arr);
        mergesort(mid+1, end, arr);
        merge(start, mid, end, arr);
    }
}

int main(){
    int size_of_array;
    cout << "Enter the size of the array: ";
    cin >> size_of_array;
    unsigned long long int arr[size_of_array];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<size_of_array;i++){
        cin >> arr[i];
    }
    mergesort(0, size_of_array-1, arr);
    cout << "The sorted array is: ";
    for(int i=0;i<size_of_array;i++){
        cout << arr[i] << " ";
    }
}
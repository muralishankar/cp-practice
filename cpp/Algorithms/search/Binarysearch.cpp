#include<iostream>
#include<stdio.h>

using namespace std;
int BinarySearch(int array[],int x,int l,int r);
int main(){
   int arr[] = {2, 3, 4,6,7,8,9,10,12,15,16,20,25,30,35, 40};
   int length=0;
   length = sizeof(arr)/sizeof(length);
   int searchElement=35;
   BinarySearch(arr,searchElement,0,length-1)==-1? printf("Elemenet not present in the array.\n"): printf("Element present in the array\n");
   searchElement=5;
   BinarySearch(arr,searchElement,0,length-1)==-1? printf("Elemenet not present in the array."): printf("Element present in the array");
   scanf("%d");
    return 0;
}
int BinarySearch(int array[],int x,int l,int r){
    int mid;
    if(r>=l){
        mid=(r-l)/2+l;
        if(x==array[mid]){
            return 1;
        }
        else if(array[mid]<x){
            return BinarySearch(array,x,mid+1,r);
        }
        else {
            return BinarySearch(array,x,l,mid-1);
        }
    }
    return -1;
}
int BinarySearchNoRec(int array[],int x,int l,int r){
    int mid;
    while(r>=l){
        mid=(r-l)/2+l;
        if(x==array[mid]){
            return 1;
        }
        else if(array[mid]<x){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    return -1;
}

/*
Time complexity - log N
*/
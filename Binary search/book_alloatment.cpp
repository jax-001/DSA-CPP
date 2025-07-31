//link:-    https://www.naukri.com/code360/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2

#include<iostream>
#include<stdbool.h>
using namespace std;

// Rules for book allotment...
/*
1. each student gets at least one book..
2. Each book should be alloated to a student...
3. book allotment should be in a contiguous manner...
4. You have to allocate the book to 'm' students that the maximum number of pages 
   assigned to a student is minimum..
*/

bool binarySearch(int arr[], int mid , int s , int n){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0 ; i< n; i++){
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount ++;
            if(studentCount > s || arr[i] > mid){    // if arr[i] > mid     then that book can't be alloated to any student which violet rule no 2...
                return false;
            }
            pageSum = arr[i];    // fresh start for a new student...
        }
    }
    return true;
}
int search_min_page(int min, int max, int s , int arr[], int n){
    int mid = min + (max - min) / 2; 
    int ans;
    while(min <= max){
        if(binarySearch(arr, mid, s, n)){
            ans =  mid;
            max = mid - 1;    // if possible then check smaller number, because we have to find minimum no of pages...
        }
        else min = mid + 1;    // if not then go for a higher one..
        mid = min + (max - min) / 2;
    }
    return ans;
}
void take_input(int n, int arr[]){
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n , s;
    cout << "Enter the number of books: " ;
    cin >> n;
    cout << "Enter the number of students: " ;
    cin >> s;
    int arr[50] ;
    cout << "Enter the number of pages of each book: " << endl;
    take_input(n,arr);
    int max = 0 , min = 0;
    // to count maximum pages ...
    for(int i = 0; i<n; i++){
        max = max + arr[i] ;
    } 
    int page = search_min_page(min , max , s, arr , n);
    cout << "Minimum no of pages count is: " << page << endl;
    return 0;
}
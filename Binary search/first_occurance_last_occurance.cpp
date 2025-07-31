#include<iostream>
using namespace std;
// {1,1,1,2,2,3,4,5,6}

void binary_search(int n, int arr[], int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int first, last;
    int count = 0;
    while(start <= end){
        if(arr[mid] == key){
            count ++;
            if(arr[mid] < arr[mid + 1]){
                last = mid;
            }
            if(arr[mid] > arr[mid - 1]){
                first = mid;
            }
            if(arr[mid] == arr[mid+1]){
                last = mid;
                while(arr[last] == arr[last + 1] && (last < n-1)){
                    last++;
                    count ++;
                }
            }
            if(arr[mid] == arr[mid-1]){
                first = mid;
                while(arr[first] == arr[first - 1] && (first > 0)){
                    first-- ;
                    count ++;
                }
            }
            cout << "first occurance: " << first << endl;
            cout << "last occurance: " << last << endl; 
            cout << "Total occurance: " << count << endl;
            // or you can claculate the occurance by :-
            // (last index - first index) + 1     (occurance of first and last index)
            return;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2 ;
    }
    return;
}

/*
int binary_right(int n, int arr[], int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == key){
            if(arr[mid] < arr[mid + 1]){
                return mid;
            }
            if((arr[mid] == arr[mid + 1])){
                while(arr[mid] == arr[mid + 1] && (mid < n-1)){
                    mid++ ;
                }
                return mid ;
            }
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int binary_left(int n, int arr[]  , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == key){
            if(arr[mid] > arr[mid - 1]){
                return mid;
            }
            if((arr[mid] == arr[mid - 1])){
                while(arr[mid] == arr[mid - 1] && (mid > 0)){
                    mid-- ;
                }
                return mid;
            }
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
*/
void take_input(int n, int arr[]){
    for(int i = 0 ; i<n; i++){
        cin >> arr[i] ; 
    }
    return ;
}

int main(){
    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;
    int arr[100];
    cout << "Take values for shorted arr[]: " << endl;
    take_input(n, arr);
    int key;
    cout << "Enter the key element: ";
    cin >> key;

    binary_search(n,arr,key);
    
/* 
    // FOR left occurance..
    int left = binary_left(n,arr,key);
    //for right occurance...
    int right = binary_right(n,arr,key);
    cout << "first occurance: " << left << endl;
    cout << "last occurance: " << right << endl;

*/

    return 0;
}
#include <iostream>
using namespace std;


void linearSearch(int arr[], int key){
    int location;
    for(int i=0; i<10; i++){
        if(arr[i] == key){
            location = i + 1;
            break;
        }else{
            location = 0;
        }
    }

    if(location == 0){
        cout<<"The key "<<key<<" was not found in the array"<<endl;
    }else{
        cout<<"The key "<<key<<" was found at index "<<location<<endl;
    }
}

int binarySearch(int myArr[], int begin, int end, int key){
    int mid;
    if(end >= begin){
        mid = (end + begin)/2;

        if(myArr[mid] == key){
            return mid + 1;
        }else if(myArr[mid] < key){
            return binarySearch(myArr, mid + 1, end, key);
        }else{
            return binarySearch(myArr, begin, mid - 1, key);
        }
    }
    return -1;
}

int main() {

    int key, binaryKey, location;
    cout<<"Enter the value to linear search:"<<endl;
    cin>>key;

    int arrCollection[10] = {21,43,23,54,75,13,5,8,25,10};

    linearSearch(arrCollection, key);

    cout<<"-------------------------------------\n";
    cout<<"Enter the key to search using binary search:"<<endl;
    cin>>binaryKey;

    int myArray[10] = {5,8,10,13,21,23,25,43,54,75};
    location = binarySearch(myArray, 0, 9, binaryKey);
    if(location == -1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at "<<location<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int linersearch (int *arr, int n, int key) {    //write *arr or arr[] itis same 
    for(int i = 0; i<n ; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;

}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int key = 70;
    int n = sizeof(arr) / sizeof (int);

  cout<<"key value on index = " << linersearch(arr, n, key) << endl;
    return 0;
}

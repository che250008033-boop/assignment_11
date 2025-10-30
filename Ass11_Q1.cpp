#include <iostream>
using namespace std;
int main() {
    int *arr= new int[100];
    for(int i=0; i<100; i++){
        arr[i]=i;
    }
    int *crr= new int[200];
    for(int i=0; i<100; i++){
        crr[i]=arr[i];
    }
    for(int i=100; i<200; i++){
        crr[i]=i;
    }
    delete[] arr;
    arr= new int[200];
    for(int i=0; i<200; i++){
        arr[i]=crr[i];
    }
    delete[] crr;
    return 0;
}

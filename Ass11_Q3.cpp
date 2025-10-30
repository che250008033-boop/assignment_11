#include <iostream>
#include <string>
using namespace std;

int main(){
   
    string input;
    cout<<"Enter the string: ";
    cin>>input;
    if(input.length()<3){
        cout<<"string length should be atleast 3, reneter the string : ";
        cin>>input;
    }
   
    char arr[3];
    string search;
    cout<<"Enter the character you wanna search in the string.."<<endl;
    cout<<"Enter the char : ";
    cin>>search;
    if(search.length()!=3){
        cout<<"char should consist 3 elements, reneter the char : ";
        cin>>search;
    }
   
    for(int i=0; i<3; i++){
        arr[i] = search[i];
    }
   
    for(int i=0; i<1; i++){
        bool found = false;
        for(int j=0; j<input.length()-2; j++){
            if(input[j] == arr[i] && input[j+1] == arr[i+1] && input[j+2]== arr[i+2]){
                cout<<"char " <<search<<" is found at index : "<<j<<endl;
                found = true;
            }
        }
        if(!found){
            cout<<"char not found!"<<endl;
        }
    }
   
    return 0;
}



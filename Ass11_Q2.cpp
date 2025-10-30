#include <iostream>
#include<string>
using namespace std;

struct student{
    string name;
    string branch;
    int age;
    string gender;
    };
int main() {
    cout<<"Please enter only male, female or other as Gender of student "<<endl;
    student *arr= new student[100];
    for(int i=0; i<100; i++){
        cout<<"Enter name of "<< i+1<<" student";
        cin>>arr[i].name;
        cout<<"Enter the age of"<<i+1<<" student";
        cin>>arr[i].age;
        cout<<"Enter gender of student ";
        cin>> arr[i].gender;
        cout<<"Enter the Branch of student";
        cin>>arr[i].branch;
        }
    
    student *crr= new student[200];
    for(int i=0; i<100; i++){
        crr[i]=arr[i];
    }
 delete[] arr;
    arr = nullptr;
    bool contin;
    cout<<"Do you wanna enter the 101st student ?\nEnter yes(y) or no(n): ";
    string response;
    cin>>response;
   
    if(response == "y"){
        contin = true;
    }
    else{
        contin = false;
        cout<<"Ok, got it";
    }
    int i = 100;
    while(contin){
        if(i>199){
            break;
        }
        cout<<"Enter the name: ";
        cin>>crr[i].name;
        cout<<"Enter the age: ";
        cin>>crr[i].age;
        cout<<"Enter the gender: ";
        cin>>crr[i].gender;
        cout<<"Enter the branch: ";
        cin>>crr[i].branch;
        cout<<endl;
        cout<<"Do you wanna continue giving input?\nEnter yes(y) or no(n): ";
        cin>>response;
        if(response == "y"){
            contin = true;
            i++;
        }
        else{
            contin = false;
            cout<<"Ok, got it";
           
        }
    }
    return 0;
}

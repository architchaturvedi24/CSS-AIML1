#include <iostream>
using namespace std;
int main(){
    int n=0,arr[n];
    cout<<"Enter no. of students: ";
    cin>>n;
    cout<<"Enter the marks of students";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        int amax=0;
        if (amax>arr[i+1]){
            amax=arr[i+1];
        }
        else{
            break;
        }
        cout<<"Maximum no. is: "<<amax;

    }
  

    return 0;
}
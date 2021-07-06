#include<iostream>

using namespace std;

int main(){
	
	// an array of 10 integers
	//if arr[0] is stored at address x,
	//then arr[1] is stored at x+sizeof(int)
    //arr[2] is stored at x+ size of(int) + size of (int)
    //and so on.
    int arr[5],i;
    
    cout<<"Size of integer in this compiler is "
    <<sizeof(int)<<"n";
    
    for(i=0; i<5; i++)
    //the use of '&' before a var name yields the address of a variable
    
    cout<< "Address arr[" <<i << "] is " << &arr[i]<< "\n";
    
    return 0;
}

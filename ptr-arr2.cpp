#include<iostream>
using namespace std;

int main(){
	
	int arr[]= {10,20,30,40,50,60};
	
	//assigns address of array to ptr
	
	int* ptr = arr;
	cout<<" Value of first element is "<< *ptr;
	
	return 0;
}

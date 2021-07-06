#include<iostream>
using namespace std;
int main(){
	
	int arr[]= { 10,20,30,40,50,60};
	
	int*ptr = arr;
	//sizeof(int) * (no. of elements in arr[]) is printed

cout<<"Size of arr[] "<<sizeof(arr)<<"\n";

//sizeof a pointer is printed which is same for all type of pointers (char*,void*,etc)

cout<< "Size of ptr "<<sizeof(ptr);

return 0;

}

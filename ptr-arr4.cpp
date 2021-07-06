#include<bits/stdc++.h>
using namespace std;
int fun(int ptr[]){
	
	int x=10;
	
	//size of a ptr is printed
	cout<<"sizeof(ptr) = "<< (int)sizeof(*ptr)<<endl;
	
	//this allowed bcz ptr is a pointer,not arr
	ptr = &x;
	
	cout<<"*ptr = "<< *ptr;
	
	return 0;
}

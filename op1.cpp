#include <iostream>
using namespace std;
int main(){
	
	int i=1;
	
	int j=2;
	int k;
	
	int m;
	    
	    //1   //3
	 k= i++ + ++i;
	 
	    //1  2   1      2    3     4
	 m = i + j + i++ + j++ + ++i + ++j;
	 cout<<k<<endl;
	 
	 cout<<m<<endl;
}

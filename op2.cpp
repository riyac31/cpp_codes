#include <iostream>
using namespace std;
int main(){
	
	int i=0 , j=20 ,k;
	
	  //  0     0     1     0
	i = i++ - --i + ++i -i--;
	 
		k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

	
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<k<<endl;
	
	return 0;
}

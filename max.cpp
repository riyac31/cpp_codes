#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<"a is larger"<<endl;
		
		}
		else{
			cout<<"c is larger"<<endl;
			
		}
		
	}
		  
		
		else{
		 if(b>c){
			cout<<"b is larger"<<endl;
		}
		else{
			cout<<"c is larger"<<endl;
			
		}
	
	   }
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	
	int savings;
	cin>>savings;
	
	if(savings>500){
		if(savings>1000){
			cout<<"mcdonalds"<<endl;
		}
		else{
			cout<<"dominos"<<endl;
		}
		cout<<"Burger "<<endl ;
	
	}
	
	else if(savings>>200){
		cout<<"Samosa\n";
		
	}
	else{
		cout<<"biscuit"<<endl;
	}
	return 0;
	
}
